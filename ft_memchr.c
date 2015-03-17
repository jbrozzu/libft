/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:30:42 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/18 10:38:02 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	*new;

	i = 0;
	str = (char *)s;
	new = NULL;
	while (i < n && new == NULL)
	{
		if (str[i] == ((char)c))
			new = &(str[i]);
		i++;
	}
	return (new);
}
