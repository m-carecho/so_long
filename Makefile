# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:37:06 by mcarecho          #+#    #+#              #
#    Updated: 2022/07/16 05:34:00 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=		so_long

CC			=		clang

CFLAGS		=		-Wall -Wextra -Werror 

LIBFT		=		./libft/libft.a

SRCS =  ./src/*.c

all:$(NAME)

$(NAME): $(LIBFT)
	${CC} -I ./includes ${CFLAGS} ${SRCS} -o ${NAME} -I . -g3 -Lmlx_Linux -lmlx_Linux -L ./minilibx -Imlx_Linux -L ./libft -lft -lXext -lX11 -lm -lz -I ./libft

$(LIBFT): 
	make bonus -C ./libft

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:clean
	rm -f $(NAME)
#make fclean -C ./libft


re: fclean all

.PHONY: all clean fclean re 
