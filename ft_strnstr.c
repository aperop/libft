/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:13:06 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/14 15:58:36 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
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
			return (haystack);
		str1 = ++haystack;
	}
	return (0);
}
