/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:09:26 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 13:24:54 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		*((unsigned char	*)dest + i) = *((unsigned char	*)src + i);
		i++;
	}
	*((unsigned char	*)dest + i) = '\0';
	return (dest);
}
