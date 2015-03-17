/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:04:12 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/13 10:57:37 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size);
	return ((void *)str);
}
