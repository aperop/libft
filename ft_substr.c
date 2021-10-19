/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:59:14 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/19 10:47:27 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция ft_strsub распределяет (с помощью malloc) и
возвращает «свежую» подстроку из строки, заданной в качестве аргумента.
Подстрока начинается с start и имеет размер len.
Если start и len не ссылаются на допустимую подстроку, поведение не определено.
Если распределение завершается неудачно, функция возвращает NULL.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*inc;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (0);
	if (start >= len)
		return (ft_strdup("\0"));
	inc = (char *)malloc((len + 1) * sizeof(char));
	if (inc == 0)
		return (inc);
	i = start;
	j = 0;
	while (i < (len + start) && *(s + i))
	{
		*(inc + j) = *(inc + i);
		j++;
		i++;
	}
	*(inc + j) = '\0';
	return (inc);
}
