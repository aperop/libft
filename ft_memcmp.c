/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:03:53 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 13:10:07 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		ret;
	
	while (i < n)
	{
		ret = *((unsigned char	*)s1 + i) - *((unsigned char	*)s2 + i);
		if (ret != 0)
			return (ret);
		i++;
	}
	return (0);
}
