# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 21:39:27 by mcarecho          #+#    #+#              #
#    Updated: 2022/04/13 21:14:25 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

CC			=		gcc

CFLAGS		=		-Wall -Wextra -Werror 

PRINTF	=		./printf/libftprintf.a

SRCS =  ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putnbr_fd.c \
		get_next_line.c


SRCS_BONUS = ft_lstnew.c 		\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c


OBJS		=		$(SRCS:.c=.o)

OBJS_BONUS		=		$(SRCS_BONUS:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	${CC} -I . -c ${CFLAGS} ${SRCS}



bonus: $(PRINTF) $(OBJS_BONUS) $(OBJS)
	cp $(PRINTF) $(NAME)
	ar -rcs $(NAME) $(OBJS_BONUS) $(OBJS)

$(PRINTF): 
	make -C ./printf
	

$(OBJS_BONUS): $(SRCS_BONUS)
	$(CC) -I . -c $(CFLAGS) ${SRCS_BONUS}

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	make clean -C ./printf

fclean:clean
	rm -f $(NAME)
	make fclean -C ./printf

rebonus: fclean bonus

re: fclean all

.PHONY: all clean fclean re bonus rebonus

