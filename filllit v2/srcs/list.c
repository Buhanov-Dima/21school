/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:26:38 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 05:57:10 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void					del_list(t_tetra **begin)
{
	t_tetra				*node;

	if (begin == NULL)
		return ;
	while (*begin)
	{
		node = *begin;
		(*begin) = (*begin)->next;
		free(node);
	}
}

static t_tetra			*new_list(int symb)
{
	t_tetra				*new_elem;

	if (!(new_elem = (t_tetra *)ft_memalloc(sizeof(t_tetra))))
		return (NULL);
	new_elem->sym = symb;
	new_elem->coor_x = 0;
	new_elem->coor_y = 0;
	new_elem->prev = NULL;
	new_elem->next = NULL;
	return (new_elem);
}

t_tetra *find_list(t_tetra **begin, int i)
{
	t_tetra *node;
	t_tetra *new_elem;
	int k;

	if (!(*begin))
		return (*begin = new_list(65));
	node = *begin;
	k = 1;
	while (i > 20)
	{
		if (node->sym == (k + 65))
			return (node);
		if (node->next == NULL)
			break ;
		node = node->next;
		k++;
		i -= 20;
	}
	new_elem = new_list(k + 65);
	new_elem->prev = node;
	node->next = new_elem;
	return (new_elem);
}