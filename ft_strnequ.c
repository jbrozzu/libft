/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:42:44 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/21 16:51:56 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (1);
	if ((!s1 || !s2) && n != 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	j = s1[i] - s2[i];
	if (j < 0 || j > 0)
		return (0);
	else
		return (1);
}
