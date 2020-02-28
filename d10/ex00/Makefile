# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 11:26:55 by sanchimi          #+#    #+#              #
#    Updated: 2020/02/18 02:49:12 by sanchimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c  srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS_FOLDER=includes

all: $(NAME)

$(NAME):
			gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I $(INCLUDES)
			ar	rs  $(NAME) $(OBJECTS)
			ranlib	$(NAME)
	
clean:
		/bin/rm -f *o

fclean:	
		/bin/rm -f $(NAME)	

re:	fclean all
