/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:12:17 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/11 16:29:36 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if ((str1 == NULL && str2 == NULL) || n == 0)
		return (0);
	if (str1 == NULL)
		return (-1);
	if (str2 == NULL)
		return (1);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < (n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
