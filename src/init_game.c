/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:56:20 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/21 18:28:52 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void load_image(t_game* game)
{
 game->sprites->player = mlx_xpm_file_to_image(game->mlx, SPRITE_PLAYER, NULL, NULL);
 game->sprites->enemy = mlx_xpm_file_to_image(game->mlx, SPRITE_ENEMY, NULL, NULL);
 game->sprites->collectible = mlx_xpm_file_to_image(game->mlx, SPRITE_COLLECTIBLE, NULL, NULL);
 game->sprites->exit = mlx_xpm_file_to_image(game->mlx, SPRITE_EXIT, NULL, NULL);
 game->sprites->wall = mlx_xpm_file_to_image(game->mlx, SPRITE_WALL, NULL, NULL);
 game->sprites->ground = mlx_xpm_file_to_image(game->mlx, SPRITE_GROUND, NULL, NULL);

}

void start_game(t_game* game)
{
  game->mlx = mlx_init();
  if(game->mlx == NULL)
    input_print_error("There is something wrong with the mlx", game);
  game->win = mlx_new_window(game->mlx, game->map->max_x * SPRITE_SIZE, game->map->max_y * SPRITE_SIZE, "so_long");
  if(game->win == NULL)
    input_print_error("Could not open the window", game);
  load_image(game);
}
