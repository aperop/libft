/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:09:26 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/05 18:13:49 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void	*dest, const void	*src, size_t	n)
{
	char		*d = dest;
	const char	*s = src;
	
	while (n--)
		*d++ = *s++;
	return dest;
}
