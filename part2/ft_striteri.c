/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:41:23 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/13 14:41:57 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char	*s, void	(*f)(unsigned int,char	*))
{
	unsigned int	index;

	index = 0;
	while (*(s + index))
	{
		f(index, s + index);
	}
}
