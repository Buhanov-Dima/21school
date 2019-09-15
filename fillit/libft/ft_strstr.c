/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:43:14 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/25 22:21:58 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	int	i;
	int	j;

	i = 0;
	if ((unsigned char)find[0] == '\0')
		return ((char*)s);
	while (s[i] != '\0')
	{
		j = 0;
		while (find[j] == s[i + j])
		{
			if (find[j + 1] == '\0')
			{
				return ((char*)(s + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
