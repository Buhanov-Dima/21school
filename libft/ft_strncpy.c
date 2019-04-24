/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:32:25 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 16:55:03 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *)src;
	i = -1;
	while (++i < n && s[i] != 0)
		dest[i] = s[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
