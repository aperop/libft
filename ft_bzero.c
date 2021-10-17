/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:49:50 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 15:13:34 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	заполняет n байт памяти нулями. ничего не возвращает
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
