/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:10:32 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/10/17 20:10:33 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(list));
	if (list)
	{
		list->content = content;
		list->next = NULL;
	}
	return (list);
}
