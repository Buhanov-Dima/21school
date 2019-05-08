/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 23:21:55 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/27 02:14:12 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		symbols(char c)
{
	if (c == ' ' || c == '\f' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == '\n')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int				i;
	int				x;
	unsigned long	num;

	num = 0;
	i = 0;
	x = 0;
	while (symbols(str[i]))
		i++;
	if (str[i] == '-')
		x = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		if (num > 9223372036854775807 && x == 1)
			return (0);
		else if (num > 9223372036854775807 && x == 0)
			return (-1);
		num = num * 10 + (unsigned long)(str[i++] - '0');
	}
	if (x == 1)
		return (-num);
	return (num);
}
