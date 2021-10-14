/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:03:35 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/14 16:24:01 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{	
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n++;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
