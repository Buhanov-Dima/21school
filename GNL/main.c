/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:39:39 by lnenita           #+#    #+#             */
/*   Updated: 2019/05/19 01:03:04 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    char *arr;
    int j = 4;
    int i;
    int fd = open("test", O_RDONLY);
//    int fd2 = open("test2", O_RDONLY);
      arr = NULL;
    // printf("%d", fd);
    while(j > 0)
    {
        i = get_next_line(fd, &arr);
        printf("%d == %s\n", i, arr);
        j--;
        if (i != 0)
            free((void *)arr);
    }    
}