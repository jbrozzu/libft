/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:36:42 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/11 17:01:12 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;

	if (!*needle)
		return ((char*)haystack);
	i = ft_strlen(needle);
	while (*haystack != '\0' && n >= i)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, i) == 0)
			return ((char*)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
