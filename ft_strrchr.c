/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:43:55 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/13 15:29:18 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*tmp = s;
	char	*ret = 0;
	
	while (*tmp)
	{
		if (*tmp == c)
			ret = tmp;
		tmp++;
	}
	return (ret);
}
