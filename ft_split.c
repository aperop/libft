el/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:58:10 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/29 15:43:01 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция ft_split выделяет (с помощью malloc) и возвращает массив «свежих» строк
(все заканчивающиеся на \0, включая сам массив),
полученных путем разбиения s с использованием символа c в качестве разделителя.
Если распределение завершается неудачно, функция возвращает NULL. 
*/
#include "libft.h"

static unsigned int	ft_countwords(char const *s, char c)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (*(s + index))
	{
		if (*(s + index) == c)
			index++;
		else
		{
			count++;
			while (*(s + index) && *(s + index) != c)
				index++;
		}
	}
	return (count);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	index;

	index = 0;
	while (*(s + index) && *(s + index) != c)
		index++;
	return (index);
}

static void	ft_free(char **str, int count)
{
	while (count)
	{
		free(*(str + count));
		count--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	wrdcnt;
	unsigned int	index;
	unsigned int	wrdlen;
	char			**strsplit;

	wrdcnt = 0;
	index = 0;
	if (s && *s)
		wrdcnt = ft_countwords(s, c);
	strsplit = (char **)malloc((wrdcnt + 1) * sizeof(char *));
	if (!strsplit)
		return (0);
	while (wrdcnt--)
	{
		while (*s && *s == c)
			s++;
		wrdlen = ft_wordlen(s, c);
		*(strsplit + index) = ft_substr(s, 0, wrdlen);
		if (!*(strsplit + index))
		{
			ft_free(strsplit, index);
			return (0);
		}
		s = s + wrdlen;
		index++;
	}
	*(strsplit + index) = 0;
	return (strsplit);
}
