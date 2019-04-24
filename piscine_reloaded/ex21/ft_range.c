/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:25:31 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/22 17:12:25 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min == max || min > max)
		return (0);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
