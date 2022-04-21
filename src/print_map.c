/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:29:10 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/21 18:39:33 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void print_map(t_game* game)
{
  int column;
  int line;

  line = 0;
  while (line < game->map->max_y)
  {
    column = 0;
    while (column < game->map->max_x - 1)
    {
      if(game->map->map[line][column] == '1')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->wall, column * SPRITE_SIZE, line *SPRITE_SIZE);
      else if(game->map->map[line][column] == '0')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->ground, column * SPRITE_SIZE, line *SPRITE_SIZE);
      else if(game->map->map[line][column] == 'C')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->collectible, column * SPRITE_SIZE, line *SPRITE_SIZE);
      else if(game->map->map[line][column] == 'E')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->exit, column * SPRITE_SIZE, line *SPRITE_SIZE);
      else if(game->map->map[line][column] == 'P')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->player, column * SPRITE_SIZE, line *SPRITE_SIZE);
      else if(game->map->map[line][column] == 'H')
        mlx_put_image_to_window(game->mlx, game->win, game->sprites->enemy, column * SPRITE_SIZE, line *SPRITE_SIZE);
    column++;
    }
    line++;
  }
}