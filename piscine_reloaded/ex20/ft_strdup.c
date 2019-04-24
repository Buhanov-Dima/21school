/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 11:48:34 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/22 17:09:11 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*arr;

	i = 0;
	n = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * (n + 1));
	if (arr == NULL)
		return (0);
	while (src[i] != 0)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
