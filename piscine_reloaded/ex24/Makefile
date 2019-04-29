# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 13:34:47 by lnenita           #+#    #+#              #
#    Updated: 2019/04/24 12:22:15 by lnenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/*.h
FLAGS = -Wall -Wextra -Werror
OPTION = -c $(HEADER)
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(FILES) $(HEADER)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all