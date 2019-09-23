/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:15:10 by lnenita           #+#    #+#             */
/*   Updated: 2019/09/23 06:06:47 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int				fd;
	int				ret;
	static t_tetra	*begin;
	char			file[BUFF + 1];

	if (argc != 2)
		ft_putstr(ERR);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ret = read(fd, file, BUFF);
		file[ret] = 0;
		if ((validate_file(file, &begin)) == 0)
		{
			del_list(&begin); // перенести в отдельную функцию
			ft_putstr(ERR_1);
			return (1);
		}
		main_on_move(&begin, (ret + 1) / 21);
	}
	return (0);
}