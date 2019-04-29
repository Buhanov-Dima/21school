/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 00:25:00 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/27 05:43:45 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	res;

	if (n < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	res = n;
	if (res < 10)
		ft_putchar(res + 48);
	if (res >= 10)
	{
		ft_putnbr(res / 10);
		ft_putnbr(res % 10);
	}
}
