/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:29:44 by lnenita           #+#    #+#             */
/*   Updated: 2019/04/24 18:08:02 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

void	*ft_memset(void *b, int val, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t num);
void	*ft_memchr(const void *arr, int c, size_t num);
int	ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t	ft_strlen(const char *str);


#endif
