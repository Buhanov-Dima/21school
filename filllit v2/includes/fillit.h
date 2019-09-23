/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:22:48 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 05:55:20 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF 600
# define ERR "usage: ./fillit [tetraminos]\n"
# define ERR_1 "error\n"
# include "./libft/libft.h"

typedef struct		s_tetra
{
	int				x[4];
	int				y[4];
	int				coor_x;
	int				coor_y;
	char			sym;
	struct s_tetra	*prev;
	struct s_tetra	*next;
}					t_tetra;

typedef struct		s_xy
{
	int				x;
	int				y;
}					t_xy;

int					validate_file(char *file, t_tetra **begin);
int					validate_tetramino(char *tetra, t_tetra **begin, int i);
int					shift(t_tetra **node);
int					take_xy(t_tetra **node, int i, int part);
int					main_on_move(t_tetra **begin, int edge);
void				del_list(t_tetra **begin);
void				create_map(int edge, char ***map);
void				drow_map(t_tetra **node, char ***map);
void				clear_map(t_tetra **node, char ***map);
void				delete_map(char ***map);
t_tetra 			*find_list(t_tetra **begin, int i);

#endif
