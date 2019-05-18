/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:39:39 by lnenita           #+#    #+#             */
/*   Updated: 2019/05/18 01:20:52 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFF_SIZE 10

int ft_nextline(char **arr, char **line)
{
    int     i;
    char    *tmp;

    i = 0;
    while (*arr != NULL && (*arr)[i] != '\n' && (*arr)[i] != '\0')
        i++;
    if (*arr != NULL && (*arr)[i] == '\n')
    {
        *line = ft_strsub((*arr), 0, i);
        tmp = ft_strsub((*arr), i + 1, (ft_strlen((*arr)) - i));
        ft_strdel(*(&arr));
        (*arr) = tmp;
        return (1);
    }
    else if (*arr != NULL && (*arr)[i] == '\0')
    {
        *line = ft_strdup(*arr);
        ft_strdel(arr);
        return (1);
    }
    else
        return (0);
}

int     get_next_line(const int fd, char **line)
{
    static char *arr[9999];
    char        *str;
    char        tmp[BUFF_SIZE + 1];
    int         ret;
    
    while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
    {
        tmp[ret] = '\0';
        if (arr[fd] == NULL)
            arr[fd] = ft_strnew(1);
        str = ft_strjoin(arr[fd], tmp);
        free(arr[fd]);
        arr[fd] = str;
        if (ft_strchr(arr[fd], '\n'))
            break ;
    }
    return (ft_nextline(&arr[fd], line));
}

int main(void)
{
    char *arr;
    int fd = open("test", O_RDONLY);
    int j;
    arr = NULL;
    while ((j = get_next_line(fd, &arr)) >= 0)
    {
        printf("%s\n", arr);
        if(j == 0)
            break;
    }
}