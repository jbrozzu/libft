/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:53:16 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/13 12:17:30 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	i = 0;
	str1 = (char*)dest;
	str2 = (const char*)src;
	while (i < n && (i == 0 || str2[i - 1] != c))
	{
		str1[i] = str2[i];
		i++;
	}
	if (i > 0 && str2[i - 1] == c)
		return (str1 + i);
	else
		return (NULL);
}
