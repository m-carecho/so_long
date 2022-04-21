/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:13:01 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/21 18:53:27 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void init_struct(t_game* game)
{
  game->map = malloc(1 * sizeof (t_map));
  game->player = malloc(1 * sizeof (t_player));
  game->sprites = malloc(1 * sizeof (t_sprites));
  game->map->map = NULL;
  game->map->max_x = 0;
  game->map->max_y = 0;
  game->map->x_len = 0;
  game->map->y_len = 0;
  game->collectible = 0;
  game->exit = 0;
  game->player->x_player = 0;
  game->player->y_player = 0;  
}

int	main(int argc, char **argv)
{
  t_game game;

  init_struct(&game);
  read_map(argc, argv, &game);
  start_game(&game);
}

