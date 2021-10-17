/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:59:14 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 18:37:05 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
возвращает указатель на подстроку строки s.
подстрока начинается с позиции s + start и имеет максимальную длину len.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*inc;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (0);
	if (start >= len)
		return(ft_strdup("\0"));
	inc = (char	*)malloc((len + 1) * sizeof(char));
	if (inc == 0)
		return (inc);
	i = start;
	j = 0;
	while (i < (len + start) && *(s + i))
	{
		*(inc + j) = *(inc + i);
		j++;
		i++;
	}
	*(inc + j) = '\0';
	return (inc);
}
