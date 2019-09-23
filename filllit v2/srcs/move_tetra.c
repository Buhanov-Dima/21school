/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_tetra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:46:01 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 06:15:51 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void				y_to_zero(t_tetra **node)
{
	t_tetra				*lst;

	lst = *node;
	while (lst)
	{
		lst->coor_y = 0;
		lst = lst->next;
	}
}

static int				check(t_tetra **node, char **map, int edge)
{
	short int			k;

	k = 0;
	while (k < 4)
	{
		if ((*node)->x[k] + (*node)->coor_x >= edge)
		{
			k = 0;
			(*node)->coor_x = 0;
			(*node)->coor_y++;
		}
		if ((*node)->y[k] + (*node)->coor_y == edge)
			break ;
		if (map[(*node)->y[k] + (*node)->coor_y]
			[(*node)->x[k] + (*node)->coor_x] == '.')
			k++;
		else
		{
			k = 0;
			(*node)->coor_x++;
		}
	}
	return (k == 4 ? 1 : 0);
}

static int				move(t_tetra **node, char ***map, int edge)
{
	while (*node)
	{
		if (check(node, *map, edge))
		{
			drow_map(node, map);
			(*node) = (*node)->next;
		}
		else
		{
			if ((*node)->prev == NULL)
			{
				delete_map(map);
				create_map(++edge, map);
				y_to_zero(node);
			}
			else
			{
				clear_map(&(*node)->prev, map);
				(*node)->coor_x = 0;
				(*node)->coor_y = 0;
				(*node)->prev->coor_x++;
				(*node) = (*node)->prev;
			}
		}
	}
	return (0);
}

int						main_on_move(t_tetra **begin, int edge)
{
	int					i;
	char				**map;
	t_tetra				*node;

	i = 0;
	node = *begin;
	edge = ft_sqrt(edge * 4);
	create_map(edge, &map);
	move(&node, &map, edge);
	while (map[i])
	{
		write(1, map[i], ft_strlen(map[i]));
		write(1, "\n", 1);
		i++;
	}
	delete_map(&map);
	return (0);
}