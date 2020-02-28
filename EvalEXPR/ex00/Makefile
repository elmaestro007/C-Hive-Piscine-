# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 23:03:20 by sanchimi          #+#    #+#              #
#    Updated: 2020/02/23 23:23:45 by sanchimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

OUT = eval_expr

all: $(OUT)

$(OUT):
	gcc -c -Wall -Wextra -Werror *.c 
	gcc -o $(NAME) -Wall -Wextra -Werror *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(OUT)
re: fclean all
