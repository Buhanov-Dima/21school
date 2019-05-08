/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:47:45 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 18:43:37 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t num)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)arr;
	i = 0;
	while (i != num)
	{
		if (dest[i] == (unsigned char)c)
			return (&dest[i]);
		i++;
	}
	return (NULL);
}
