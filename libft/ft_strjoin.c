/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:01:39 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/27 02:33:14 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if ((!s1 || !s2) || (!s1 && !s2))
		return (NULL);
	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)ft_memalloc(sizeof(char) * i + 1)))
		return (NULL);
	while (i > 0)
	{
		if (*s1)
			str[j] = *s1++;
		else if (*s2)
			str[j] = *s2++;
		j++;
		i--;
	}
	str[j] = '\0';
	return (str);
}
