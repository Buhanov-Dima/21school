/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:40:23 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 03:42:52 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void				shift_x(t_tetra **node)
{
	short int			min;
	short int			i;

	i = 0;
	min = 3;
	while (i < 4)
	{
		min = (*node)->x[i] < min ? (*node)->x[i] : min;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		(*node)->x[i] -= min;
		i++;
	}
}

static void				shift_y(t_tetra **node)
{
	short int			min;
	short int			i;

	i = 0;
	min = 3;
	while (i < 4)
	{
		min = (*node)->y[i] < min ? (*node)->y[i] : min;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		(*node)->y[i] -= min;
		i++;
	}
}

int						shift(t_tetra **node)
{
	shift_x(node);
	shift_y(node);
	return (1);
}

int						take_xy(t_tetra **node, int i, int part)
{
	if (i < 4)
	{
		(*node)->x[part] = i;
		(*node)->y[part] = 0;
	}
	else if (i > 4 && i < 9)
	{
		(*node)->x[part] = i - 5;
		(*node)->y[part] = 1;
	}
	else if (i > 9 && i < 14)
	{
		(*node)->x[part] = i - 10;
		(*node)->y[part] = 2;
	}
	else if (i > 14 && i < 19)
	{
		(*node)->x[part] = i - 15;
		(*node)->y[part] = 3;
	}
	return (0);
}