/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 02:49:56 by lnenita           #+#    #+#             */
/*   Updated: 2019/07/06 23:53:09 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//каждая тетраминос имеет связи минимум 6 максимум 8
//квадрат на третамину состоит из 21 символа

//1. валидация квадрата в которой находится тетрамина на 12 точек и 4 хеша + на 6 или 8 связей
//    1.1 валидация на кол-во точек
//    1.2 валидация на кол-во хеш
//    1.3 валидация на кол-во связей
//    1.4 валидация квадрата под вопросом
//
//2. нужна функция которая будет определять каждую тетрамину в отдельный квадрат
//    2.1 поместить в двумерный массив каждую тетраминку? Или же для каждой создавать символьный массив?
//    2.2

//3. функция которая будет собирать наименьший квадрат


#include "libft/libft.h"
#define BUFF_SIZE 10000

void check_error(char **tetraminos, int tetra_val)
{
    int i;

    i = 0;
    while (*(&tetraminos))
    {
        printf("%s", tetraminos[tetra_val]);
    }
}


void delimetr_tetra(char *tetra)
{
    int i;
    int tetra_val;
    char *tetraminos[21];

    i = 0;
    tetra_val = 0;

    while(tetra[i] != 0)
    {
        if ((tetra[i] == '\n' && tetra[i + 1] == '\n') || (tetra[i] == '\n' && tetra[i + 1] == '\0') || i == 0)
        {
            tetraminos[tetra_val] = ft_strsub(tetra, i, 21);
            check_error(tetraminos, tetra_val);
            tetra_val++;

        }
/*
        if ((tetra[i] == '\n' && tetra[i+1] == '\n') || tetra[i+1] == '\0')
        {
            create_tetra_arr(tetra, i, tetra_val);
            tetra_val += 1;
        }
        printf("%s", tetra);
*/

        i++;

    }
}

char *ft_tetraminos(int fd, char **line)
{
    static char *arr[MAX_FD_SIZE];
    char        tmp[BUFF_SIZE + 1];
    char        *str;
    int         ret;

    while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
    {
        tmp[ret] = '\0';
        if (arr[fd] == NULL)
            arr[fd] = ft_strnew(1);
        str = ft_strjoin(arr[fd], tmp);
        ft_strdel(&arr[fd]);
    }
//    printf("%s", str);
    delimetr_tetra(str);
//    printf("%s", str);
    return (str);
}



int main(int argc, char **argv)
{
    int fd;
    char **tetra;
    tetra = NULL;
    if((fd=open(argv[1], O_RDONLY))==-1)
        printf("Cannot open file.\n");
    ft_tetraminos(fd, *(&tetra));
    return 0;
}