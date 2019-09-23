/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:42:35 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 04:55:50 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int				connect_counter(char *tetra, int i)
{
	int					connect;

	connect = 0;
	if (i % 5 != 0)
		if (tetra[i - 1] == '#')
			connect++;
	if (i % 5 != 3)
		if (tetra[i + 1] == '#')
			connect++;
	if (i > 4)
		if (tetra[i - 5] == '#')
			connect++;
	if (i < 14)
		if (tetra[i + 5] == '#')
			connect++;
	return (connect);
}

int validate_tetramino(char *tetra, t_tetra **begin, int i)
{
	t_tetra			*node;
	int 			k;
	int 			part;
	int 			connect;

	node = find_list(begin, i);
	k = -1;
	part = 0;
	connect = 0;
	while (++k < 20)
	{
		if (k % 5 == 4 && tetra[k] != '\n')
			return (0);
		else if (k % 5 != 4)
		{
			if (tetra[k] != '#' && tetra[k] != '.')
				return (0);
			if (tetra[k] == '#' && part < 4)
			{
				take_xy(&node, k, part++);
				connect += connect_counter(tetra, k);
			}
		}
	}
	return ((part != 4 || (connect != 6 && connect != 8)) ? 0 : shift(&node));
}

int validate_file(char *file, t_tetra **begin)
{
	int			i;
	int			file_len;
	char		*tetra;

	i = 0;
	file_len = ft_strlen(file);
	if (file_len < 20)
		return (0);
	while (i < file_len)
	{
		tetra = ft_strsub(file, i, 20);
		if ((!tetra) || (validate_tetramino(tetra, begin, i) == 0)) //возможно ошибка
			return(0);
		ft_strdel(&tetra);
		i += 20;
		if (i < file_len && file[i] != '\n')
			return (0);
		if (file_len - i < 20 && file_len - i > 0)
			return (0);
		i++;
	}
	return (file_len);
}