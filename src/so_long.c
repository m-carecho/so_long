/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:13:01 by mcarecho          #+#    #+#             */
/*   Updated: 2022/04/13 21:32:02 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void input_print_error(char *msg)
{
  ft_printf("Error: %s\n", msg);
  exit(EXIT_FAILURE);
}

static void input_check(int argc, char *path)
{
  int fd;
  
  if(argc == 1)
    input_print_error("Missing map file (*.ber format).");
  else if(argc > 2)
    input_print_error("To many arguments.");
  else if(ft_strncmp(&path[ft_strlen(path) - 4], ".ber", 4))
    input_print_error("Invalid map format. Game only supports '.ber' format.");
  fd = open(path, O_RDONLY);
  
  if(fd == -1)
  {
    close(fd);
    input_print_error("Wrong file path/name or file nonexist.");
  }
  
}

int	main(int argc, char **argv)
{
  input_check(argc, argv[1]);
  return (0);
}

