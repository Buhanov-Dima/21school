/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:35:40 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/27 04:38:37 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_arr(char ***arr, int j)
{
	while (j >= 0)
	{
		free((*arr)[j]);
		(*arr)[j] = NULL;
		j--;
	}
	free(*arr);
	*arr = NULL;
}

static int	count_words(const char *s, char c)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (*s != '\0')
	{
		if (a == 1 && *s == c)
			a = 0;
		if (a == 0 && *s != c)
		{
			a = 1;
			b++;
		}
		s++;
	}
	return (b);
}

static char	*valera(char const *s, int i, char c)
{
	char	*str;
	int		j;

	j = i;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (!(str = ft_strsub(s, j, (size_t)i - j)))
		return (NULL);
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i++] == c)
			continue ;
		if (!(arr[j] = valera(s, --i, c)))
		{
			free_arr(&arr, j);
			return (NULL);
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	arr[j] = 0;
	return (arr);
}
