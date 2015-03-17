/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 18:30:32 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/11 18:42:17 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_alloc_tab(int line, int col)
{
	int i;
	char **tab;

	i = 0;
	tab = malloc(sizeof(char *) * (line));
	if (!tab)
		return (NULL);
	while (i < (line))
	{
		tab[i] = malloc(sizeof(char) * (col + 1));
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}
