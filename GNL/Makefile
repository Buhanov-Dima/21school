# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/03 19:40:50 by lnenita           #+#    #+#              #
#    Updated: 2019/05/03 19:57:32 by lnenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

FLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS) *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all