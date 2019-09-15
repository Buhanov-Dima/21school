/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:43:19 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/27 02:08:24 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src == dest)
		return (dest);
	if (s > d)
		d = ft_memcpy(d, s, len);
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (d);
}
