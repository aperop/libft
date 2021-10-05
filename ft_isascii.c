/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:28:55 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/05 15:30:06 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int	c)
{
	return (c >= 0 && c <= 127);
}