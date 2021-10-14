/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:06:13 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/14 15:09:05 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	const size_t	slen = ft_strlen(src);
	const size_t	dlen = ft_strlen(dst);

	if (size == dlen)
		return (size + dlen);
	if (slen < size - dlen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, size - 1);
		*(dst + dlen + size - 1) = '\0';
	}
	return (slen + dlen);
}
