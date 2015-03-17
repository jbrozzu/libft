/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 18:17:00 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/11 18:28:40 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_string(char *s2, char c)
{
	int i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	is_first(char *s1, char c, int len)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	if (i == len)
		return (1);
	return (0);
}

void		ft_inter(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (is_in_string(s2, s1[i]) && is_first(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
}
