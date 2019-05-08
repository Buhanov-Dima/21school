/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:18:23 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 17:26:15 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *append, size_t n)
{
	size_t	i;
	int		len;

	len = 0;
	i = 0;
	while (dest[len] != 0)
		len++;
	while (append[i] != 0 && i < n)
	{
		dest[len] = append[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
