# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 00:25:50 by mcarecho          #+#    #+#              #
#    Updated: 2022/04/13 21:15:30 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libftprintf.a

CC_FLAGS	=	-Wall -Wextra -Werror

SRCS	=		ft_printf.c 	\
				ft_base.c   	\
				ft_uitoa.c  	\
				write_char.c	\
				write_hex.c		\
				write_int.c		\
				write_string.c	\
				write_unsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS) 


$(OBJS):
	gcc $(CC_FLAGS) -I ../ -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re 
