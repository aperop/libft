/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:43:55 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/14 16:26:11 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*ret;

	tmp = s;
	ret = 0;
	while (*tmp)
	{
		if (*tmp == c)
			ret = tmp;
		tmp++;
	}
	return (ret);
}
