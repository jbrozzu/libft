/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 10:41:26 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/15 11:35:21 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *list;

	if (lst)
	{
		list = lst;
		while (list)
		{
			(*f)(list);
			list = list->next;
		}
	}
}
