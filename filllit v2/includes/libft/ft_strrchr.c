/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:35:40 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 20:13:09 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *s;

	s = (char *)str + ft_strlen(str);
	while (*s != ch)
	{
		if (s == str)
			return (0);
		s--;
	}
	return (s);
}
