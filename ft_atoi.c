/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:51:50 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/06 12:55:26 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign*=-1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (sign * number);
}