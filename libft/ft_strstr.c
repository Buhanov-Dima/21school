/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:43:14 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 22:23:11 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *find)
{
	int i;
	int j;

	i = 0;
	if (*find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (find[j] == str[i + j])
		{
			if (find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
