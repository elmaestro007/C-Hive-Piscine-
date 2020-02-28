# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 15:20:12 by sanchimi          #+#    #+#              #
#    Updated: 2020/02/18 16:20:29 by sanchimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	do-op

RM=	rm -f

CFLAGS=	-Wall -I../include

LIB=-lmy -L../lib

CC=	gcc

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) do-op.c my_opp.c $(LIB)

all:	$(NAME) clean

clean:
	$(RM) $(NAME)

.PHONY:	$(NAME) all clean
