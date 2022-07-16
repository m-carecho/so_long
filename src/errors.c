/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:19:28 by mcarecho          #+#    #+#             */
/*   Updated: 2022/07/15 23:27:46 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void free_ptr(void** str)
{
  if(*str != NULL)
  {
    free(*str);
    *str = NULL;
  }
}

void input_print_error(char *msg, t_game* game)
{
  int c;
  
  ft_printf("Error\n %s\n", msg);
  if(game->map->tmp != NULL)
    free_ptr((void**) &game->map->tmp);
  if(game->map->map)
  {
    c = 0;
    while (game->map->map[c] != NULL)
    {
      free_ptr((void**) &game->map->map[c]);
      c++;
    }
    free_ptr((void**) &game->map->map);
    free_ptr((void**) &game->player);
    free_ptr((void**) &game->map);
    
  }
  exit(EXIT_FAILURE);
}

void error_free(char *msg, t_game* game, char* str)
{
  free_ptr((void**) &str);
  input_print_error(msg, game);
}