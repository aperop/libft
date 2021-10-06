/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:43:55 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/06 15:44:05 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char	*s, int	c)
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
