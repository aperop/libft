/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:58:58 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 19:45:24 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char	*)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (str);
	i = 0;
	while (*(s + i) && f)
	{
		*(str + i) = f(i, *(s + i));
		i++;
	}
	return (str);
}