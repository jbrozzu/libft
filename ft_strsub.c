/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:48:34 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/10 15:48:51 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(len + 1);
	if (!str || !s)
		return (NULL);
	while (len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
