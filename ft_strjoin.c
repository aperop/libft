/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:58:28 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/19 10:47:53 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция ft_strjoin выделяет (с помощью malloc) и возвращает «свежую» строку,
заканчивающуюся на \0, в результате объединения s1 и s2.
Если распределение завершается неудачно, функция возвращает NULL.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	count;
	char	*s;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == 0)
		return (s);
	count = 0;
	while (count < len && *s1)
	{
		*(s + count) = *(s1++);
		count++;
	}
	while (count < len && *s2)
	{
		*(s + count) = *(s2++);
		count++;
	}
	*(s + count) = '\0';
	return (0);
}
