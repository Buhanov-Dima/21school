/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:16:35 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 16:31:45 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*s;

	s = (char *)src;
	i = 0;
	while (*s != '\0')
	{
		dest[i] = *s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
