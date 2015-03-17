/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 19:06:46 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/14 19:30:02 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		if (alst && *alst)
		{
			new->next = (*alst);
			*alst = new;
		}
		else
			*alst = new;
	}
}
