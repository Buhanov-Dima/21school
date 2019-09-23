/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 12:42:11 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/23 16:18:05 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	k;

	k = c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		if (s[i] == k)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
