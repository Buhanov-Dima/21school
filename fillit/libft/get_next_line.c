/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 01:28:18 by lnenita           #+#    #+#             */
/*   Updated: 2019/07/06 23:04:18 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_nextline(char **arr, char **line)
{
    int     i;
    char    *tmp;

    i = 0;
    while (*arr != NULL && (*arr)[i] != '\n' && (*arr)[i] != '\0')
        i++;
    if (*arr != NULL && (*arr)[i] == '\n')
    {
        *line = ft_strsub(*arr, 0, i);
        tmp = ft_strsub(*arr, i + 1, (ft_strlen(*arr) - i));
        ft_strdel(arr);
        *arr = tmp;
    }
    else if (*arr != NULL && (*arr)[i] == '\0')
    {
        *line = ft_strsub(*arr, 0, i);
        ft_strdel(arr);
    }
    return (1);
}

int     get_next_line(const int fd, char **line)
{
    static char *arr[10240];
    char        tmp[BUFF_SIZE + 1];
    char        *str;
    int         ret;
    
    if (fd < 0 && !line)
        return (-1);
    while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
    {
        tmp[ret] = '\0';
        if (arr[fd] == NULL)
            arr[fd] = ft_strnew(1);
        str = ft_strjoin(arr[fd], tmp);
        ft_strdel(&arr[fd]);
        arr[fd] = str;
        if (ft_strchr(arr[fd], '\n'))
            break ;
    }
    if (ret < 0)
        return (-1);
    if (ret == 0 && (arr[fd] == NULL || arr[fd][0] == '\0'))
        return (0);
    return (ft_nextline(&arr[fd], line));
}