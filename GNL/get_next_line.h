/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:20:53 by lnenita           #+#    #+#             */
/*   Updated: 2019/05/14 22:07:44 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 1
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

int     get_next_line(const int fd, char **line);
int     ft_newline(char **arr, char **line, int ret);


#endif