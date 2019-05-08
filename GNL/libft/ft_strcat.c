/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:56:22 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 17:22:43 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *append)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (dest[len] != 0)
		len++;
	while (append[i] != 0)
	{
		dest[len] = append[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
