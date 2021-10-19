/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:13:06 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/19 10:40:50 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция strnstr ищет первое вхождение len символов строки
(за исключением признак конца строки), на которую указывает аргумент needle,
в строку, на которую указывает аргумент haystack.
Если строка needle имеет нулевую длину,
то функция вернет указатель на начало строки haystack.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str1;
	const char	*str2;

	str1 = haystack;
	str2 = needle;
	while (*haystack)
	{
		while (*str2 && (*str1 == *str2))
		{
			str1++;
			str2++;
		}
		if (!*str2)
			return ((char *)haystack);
		str1 = ++haystack;
	}
	return (0);
}
