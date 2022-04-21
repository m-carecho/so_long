/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:19:28 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/21 17:54:14 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void input_print_error(char *msg, t_game* game)
{
  int c;
  
  ft_printf("Error\n %s\n", msg);
  if(game->map->map)
  {
    c = 0;
    while (game->map->map[c] != NULL)
    {
      free(game->map->map[c]);
      c++;
    }
    free(game->map->map);
    free(game->player);
    free(game->map);
    
  }
  exit(EXIT_FAILURE);
}

void error_free(char *msg, t_game* game, char* str)
{
  free(str);
  input_print_error(msg, game);
}