/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 18:34:32 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/11 17:22:19 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next_list;

	if (!alst || !*alst)
		return ;
	list = (*alst);
	while (list)
	{
		next_list = list->next;
		del(list->content, list->content_size);
		list = next_list;
		free(list);
	}
	(*alst) = NULL;
}
