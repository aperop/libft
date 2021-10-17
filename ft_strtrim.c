/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:59:08 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 19:33:25 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	возвращает указатель на замолоченную строку
	содержимое новой строки это остаток от s1, подрезанной с начала и с конца.
	выкидывает с начала и с конца символы, которые содержатся в строке set
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (*(s1 + start) && ft_strchr(set, *(s + start)))
		start++;
	if (start == end || end == 0)
		return (ft_strdup("\0");
	while (ft_strchr(set, *(s + end)))
		end--;
	return (ft_substr(s, start, end - start + 1));
}
