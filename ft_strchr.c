/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:11:00 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/13 15:19:55 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	char	*tmp = s;
	while (*tmp != c && *tmp)
	{
		tmp++;
	}
	if (*tmp != c)
		*tmp = 0;
	return (tmp);
}
