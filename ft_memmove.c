/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:16:37 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/15 11:12:52 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)malloc(sizeof(*str) * n);
	if (!str)
		return (NULL);
	ft_memcpy(str, str2, n);
	ft_memcpy(str1, str, n);
	free(str);
	return (str1);
}
