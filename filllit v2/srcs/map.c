/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:48:20 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 06:09:25 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void					create_map(int edge, char ***map)
{
	short int			i;

	i = 0;
	*map = (char **)malloc(sizeof(char *) * (edge + 1));
	(*map)[edge] = NULL;
	while (i < edge)
	{
		(*map)[i] = (char *)malloc(sizeof(char) * (edge));
		(*map)[i][edge] = '\0';
		ft_memset((*map)[i], '.', edge);
		i++;
	}
}

void					drow_map(t_tetra **node, char ***map)
{
	short int			k;

	k = 0;
	while (k <= 3)
	{
		(*map)[(*node)->y[k] + (*node)->coor_y]
		[(*node)->x[k] + (*node)->coor_x] = (*node)->sym;
		k++;
	}
}

void					clear_map(t_tetra **node, char ***map)
{
	short int			k;

	k = 0;
	while (k < 4)
	{
		(*map)[(*node)->y[k] + (*node)->coor_y]
		[(*node)->x[k] + (*node)->coor_x] = '.';
		k++;
	}
}

void					delete_map(char ***map)
{
	int					i;

	i = 0;
	while ((*map)[i])
		i++;
	while (i >= 0)
	{
		free((*map)[i]);
		(*map)[i] = NULL;
		i--;
	}
	free(*map);
	*map = NULL;
}
