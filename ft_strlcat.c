/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:46:53 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/11 14:26:02 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	len_all;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	len_all = len_dest + len_src;
	if (n <= len_dest)
		return (n + len_src);
	i = 0;
	while (len_dest < n - 1)
		dest[len_dest++] = src[i++];
	dest[len_dest] = '\0';
	return (len_all);
}
