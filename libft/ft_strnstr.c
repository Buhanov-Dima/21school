/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 22:28:32 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 22:57:28 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (*find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (find[j] == str[i + j] && (i + j < n))
		{
			if (find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char *str1 = "12345678";
	char *str2 = "456";

	char *s;
	s = ft_strnstr(str1, str2, 6);
	printf("%s", s);
	return (0);
}
