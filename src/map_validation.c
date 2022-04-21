/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:17:17 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/21 18:48:36 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int input_check(int argc, char *path, t_game* game)
{
  int fd;
  
  if(argc == 1)
    input_print_error("Missing map file (*.ber format).", game);
  else if(argc > 2)
    input_print_error("To many arguments.", game);
  else if(ft_strncmp(&path[ft_strlen(path) - 4], ".ber", 4))
    input_print_error("Invalid map format. Game only supports '.ber' format.", game);
  fd = open(path, O_RDONLY);
  
  if(fd == -1)
  {
    close(fd);
    input_print_error("Wrong file path/name or file nonexist.", game);
  }
  return(fd);
  
}

static void validation_line(char* str, t_game* game, int line)
{
  int c;
  
  c = 0;
    while (str[c] != 0)
    {
      if (line == 0 && str[c] != '1' && str[c] != '\n')
         error_free("Invalid character on first line", game, str);
      else if(str[0] != '1' && str[game->map->max_x -1] != '1' && str[c] != '0' 
            && str[c] != '1' && str[c] != 'C' && str[c] != 'E' && str[c] != 'P'
            && str[c] != 'H')
              error_free("Invalid character on line", game, str);
      if(str[c] == 'P')
      {
        if(game->player->x_player != 0 && game->player->y_player != 0)
          error_free("More than one player on the map", game, str);
        game->player->x_player = c;
        game->player->y_player = line;
      }
      if(str[c] == 'C')
        game->collectible += 1;
      if(str[c] == 'E')
      {
        if(game->exit != 0)
          error_free("More than one exit on the map", game, str);
        game->exit += 1;
      }
      c++;
    }
}

static void finish_validation(t_game* game, int line)
{
  int c;

  c = 0;
  while(game->map->map[line][c] != 0) 
  {
    if(game->map->map[line][c] != '1' && game->map->map[line][c] != '\n')
      input_print_error("Invalid character on last line", game);
    c++;
  }
  if(game->collectible == 0 || game->exit == 0 || game->player->x_player == 0)
    input_print_error("something is missing, check collectibles, player or exit", game);
  game->map->max_y = line;
  if(game->map->max_x < 4 || game->map->max_x < 4)
    input_print_error("there is something wrong with the map dimensions", game);
}

void  read_map(int argc, char **argv, t_game* game)
{
  int fd;
  char *str;
  int line;
  int j;
  char **tmp;
  
  line = 0;
  fd = input_check(argc, argv[1], game);
  str = get_next_line(fd);
  while(str != NULL)
  {
    game->map->x_len = ft_strlen(str);
    if (line == 0)
      game->map->max_x = game->map->x_len;
    else if (game->map->x_len != game->map->max_x)
       input_print_error("Rows and columns are not equal", game);
    validation_line(str, game, line);
    tmp = malloc((line + 2) * sizeof (char*));
    tmp[line + 1] = NULL;
    tmp[line] = str;
    j = 0;
    if(line != 0)
    {
      while(j < line)
      {
        tmp[j] = game->map->map[j];
        j++;
      }
    free(game->map->map);
    }
    game->map->map = tmp;
    str = get_next_line(fd);
    line++;
  }
  finish_validation(game, line - 1);
}