/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:08 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/13 18:04:58 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char	*d = dst;
	char	*s = src;
	
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		char	*ls = s + (len - 1);
		char	*ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return dst;
}
