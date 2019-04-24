/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:57:48 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/22 16:00:58 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;

	x = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (x-- > 1)
		nb *= x;
	return (nb);
}
