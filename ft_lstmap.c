/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 11:36:11 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/22 14:07:48 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *first_elem;
	t_list *tmp;

	if (!f || !lst)
		return (NULL);
	new_list = f(lst);
	first_elem = ft_lstnew(new_list->content, new_list->content_size);
	if (!first_elem)
		return (NULL);
	tmp = first_elem;
	lst = lst->next;
	while (lst)
	{
		new_list = f(lst);
		tmp->next = ft_lstnew(new_list->content, new_list->content_size);
		if (!(tmp->next))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (first_elem);
}
