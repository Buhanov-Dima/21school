/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnenita <lnenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:39:39 by lnenita           #+#    #+#             */
/*   Updated: 2019/05/08 03:56:12 by lnenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 3

char	*ft_strsub_nl(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		res[i] = s[start];
        if (res[i] == '\n')
            break ;
		start++;
		i++;
	}
    res[i + 1] = '\0';
	return (res);
}


int get_next_line(const int fd, char **line)
{
    int ret;
    char tmp[BUFF_SIZE + 1]; // размер буффера + 1 для конца строки
    char *str; // новая строка в которую помещяем прочитанню строку
    char *cache;
//    int ch = 10;
//    int ldt = -1; // счетчик нужно убрать
    int i = 0;
    cache = ft_strnew(0);
    line = NULL; // зануляем массив для компила без ошибок --> в дальнейшем запишем с fd строки через этот массив
    while ((ret = read(fd, tmp, BUFF_SIZE)) > 0) // проверка на размер прочитанного буффера --> будет равен 0 после прочтения всего файла
    {
        tmp[ret] = '\0'; // добавялем конец строки для прочитанного кол-ва символов буффера
        if (str == NULL)
            str = ft_strnew(0); // исправлен на 0, до этого мог принимать только x > 0 создается для того что бы не подхватывал из памяти мусор
        str = ft_strjoin(str, tmp); //сливаем 2 строки в одну, к новой созданной добавляем прочитанную из буффера

        if (ft_strchr(str, '\n')) // проверяем созданную строку на \n если 1 то есть '\n'
        {
            //cache = ft_strchr(str, '\n');
            str = ft_strsub_nl(str, 0, ft_strlen(str)); // записываем строку с нулевого индекса(строка, index start, длина строки)
            printf("str%d == %s\n", i + 1, str);
            ft_memdel((void **)&str); // очищаем память обнуляем строку
        }
        i++;
        printf("str == %d\n", i);
    }
    return (0);
}

int main(void)
{
    int fd;
    char **arr = NULL;
    fd = open("test", O_RDONLY);
    get_next_line(fd, arr);
    return (0);
}