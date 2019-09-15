/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:24:47 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/23 16:17:40 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int val, size_t num)
{
	int				i;
	unsigned char	*arr;

	arr = (unsigned char *)b;
	i = 0;
	while (num != 0)
	{
		arr[i] = val;
		i++;
		num--;
	}
	return (arr);
}
