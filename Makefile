# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:37:06 by mcarecho          #+#    #+#              #
#    Updated: 2022/04/21 17:43:46 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=		so_long

CC			=		gcc -L./libft -I./libft   

CFLAGS		=		-Wall -Wextra -Werror 

SRCS =  ./src/*.c

all:$(NAME)

$(NAME):
	${CC} -I ./includes -I ./libft ${CFLAGS} ${SRCS} -o ${NAME} -L ./libft -lft -L./minilibx -lmlx_Linux -L/usr/lib -I minilibx -Imlx_linux -lXext -lX11 -lm -lz -g3

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:clean
	rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean re 
