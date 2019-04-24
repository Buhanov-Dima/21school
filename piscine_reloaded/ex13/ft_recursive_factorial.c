/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:42:29 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/22 16:08:07 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int x;

	x = 0;
	if (nb > 0 && nb < 13)
		x = nb * ft_recursive_factorial(nb - 1);
	else if (nb == x)
		x = 1;
	else
		x = 0;
	return (x);
}
