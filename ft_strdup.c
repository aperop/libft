/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:59:05 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 18:31:38 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	возвращает указатель на дубликат строки s в куче
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*cp;

	s1len = ft_strlen(s1) + 1;
	cp = (char *)malloc(s1len * sizeof(char));
	if (cp == 0)
		return (cp);
	ft_memcpy(cp, s1, s1len);
	*(cp + s1len) = '\0';
	return (cp);
}
