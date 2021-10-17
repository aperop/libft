/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:53:56 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 15:26:58 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	возвращает указатель на занулённую область памяти 
	(для count объектов размера size каждый)
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}
