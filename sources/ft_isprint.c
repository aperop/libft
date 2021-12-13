/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:09:24 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/12/13 13:57:38 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Функция isprint возвращает ненулевое значение,
если аргумент c является печатным символом, включая пробел;
в противном случае возвращается 0.
Значения печатных символов находятся в пределах от 32 до 126.
*/
#include "../libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
