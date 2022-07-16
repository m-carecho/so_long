# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:37:06 by mcarecho          #+#    #+#              #
#    Updated: 2022/07/15 23:59:34 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=		so_long

CC			=		gcc -L./libft -I./libft   

CFLAGS		=		-Wall -Wextra -Werror 

LIBFT			=		./libft/libft.a

SRCS =  ./src/*.c

all:$(NAME)

$(NAME): $(LIBFT)
	${CC} -I ./includes -I ./libft ${CFLAGS} ${SRCS} -o ${NAME} -L ./libft -lft -L./minilibx -lmlx_Linux -L/usr/lib -I minilibx -Imlx_linux -lXext -lX11 -lm -lz -g3 -fsanitize=address

$(LIBFT): 
	make bonus -C ./libft

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:clean
	rm -f $(NAME)
#make fclean -C ./libft


re: fclean all

.PHONY: all clean fclean re 
