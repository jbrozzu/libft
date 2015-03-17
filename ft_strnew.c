/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:02:24 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/21 17:48:44 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(size + 1)))
	{
		while (i < size + 1)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	return (NULL);
}
