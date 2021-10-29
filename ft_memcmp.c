/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:03:53 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/29 15:53:57 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция memcmp побайтно сравнивает два массива (области памяти),
на которые указывают аргументы s1 и s2.
Каждый байт массива определяется типом unsigned char. Сравнение продолжается,
пока не будут проверено n байт или пока не встретятся отличающиеся байты.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	while (i < n)
	{
		ret = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		if (ret != 0)
			return (ret);
		i++;
	}
	return (0);
}
