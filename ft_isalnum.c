/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:17:56 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/05 16:09:03 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c);
int ft_isdigit(int  c);

int	ft_isalnum(int	c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
