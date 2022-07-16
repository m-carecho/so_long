/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:27 by mcarecho          #+#    #+#             */
/*   Updated: 2022/07/15 23:29:44 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

// ----------------------------- INCLUDES ------------------------------------ |

# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include "mlx.h"

// ------------------------- DEFINES (constants) ----------------------------- |

# define SPRITE_SIZE 32
# define SPRITE_PLAYER "./src/assets/player.xpm"
# define SPRITE_ENEMY "./src/assets/enemy.xpm"
# define SPRITE_COLLECTIBLE "./src/assets/collectible.xpm"
# define SPRITE_EXIT "./src/assets/exit.xpm"
# define SPRITE_WALL "./src/assets/wall.xpm"
# define SPRITE_GROUND "./src/assets/ground.xpm"


// ------------------------- TYPEDEFS (structs) ------------------------------ |

typedef struct s_map
{
  char **map;
  int max_y;
  int max_x;
  int x_temp;
  int y_temp;
  char *tmp;
  
}			t_map;

typedef struct s_player
{
  int x_player;
  int y_player;
  
}     t_player;

typedef struct s_sprites
{
  void* player;
  void* collectible;
  void* exit;
  void* wall;
  void* enemy;
  void* ground;
}     t_sprites;


typedef struct s_game
{
  t_map* map;
  t_player* player;
  t_sprites* sprites;
  int collectible;
  int exit;
  void* mlx;
  void* win;
}     t_game;


// --------------------------- PROTOTYPES ------------------------------------ |

void input_print_error(char *msg, t_game* game);
void read_map(int argc, char **argv, t_game* game);
void error_free(char *msg, t_game* game, char* str);
void start_game(t_game* game);
void print_map(t_game* game);
void free_ptr(void** str);


#endif