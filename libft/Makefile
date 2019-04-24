# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 13:34:47 by lnenita           #+#    #+#              #
#    Updated: 2019/04/23 11:29:03 by lnenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = *.c

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

$(NAME):all

all:
	gcc -c $(FLAGS) $(FILES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o *~ \#*\#

fclean: clean
	rm -Rf $(NAME)

re: fclean all

check: re
	/bin/rm -f *.o
