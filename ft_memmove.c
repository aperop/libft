/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:08 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 15:58:37 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	копирует n байт из src в dst. области памяти могут перекрываться
*/
#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dst < (unsigned char *)src)
	{
		while (len--)
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
	}
	else if((unsigned char *)src > (unsigned char *)dst)
	{
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
		
	}
	return (dst);
}
