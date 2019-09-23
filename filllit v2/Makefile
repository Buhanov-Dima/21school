# ********  ******************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnenita <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 01:20:10 by lnenita           #+#    #+#              #
#    Updated: 2019/09/23 02:01:03 by lnenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, $(NAME), clean, fclean, re

NAME = fillit

SRC_PT = ./srcs/
OBJ_PT = ./obj/
INC_PT = ./includes/
LIBFT_PT = ./includes/libft/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fillit.h

# addprefix - joining path to name
SRS = $(addprefix $(SRC_PT), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_PT), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PT))

SRC_NAME =  main.c			\
            validate.c		\
            list.c			\
            coord.c			\
            map.c			\
            move_tetra.c	\


all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) -lm -L $(LIBFT_PT) -lft
#     @make lib_start

$(OBJ_PT)%.o: $(SRC_PT)%.c
	@mkdir -p $(OBJ_PT)
	@gcc -Wall -Wextra -Werror $(INC) -o $@ -c $<

clean:
	@/bin/rm -rf $(OBJ_PT)

fclean: clean
	@/bin/rm -f $(NAME)


re: fclean all

