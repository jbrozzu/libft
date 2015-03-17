/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:21:49 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/11/21 19:18:30 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_nb_word(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static char		*ft_copy_word(char const *s, size_t *l, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[*l] == c && s[*l])
		*l = *l + 1;
	if (s[*l] != c && s[*l])
	{
		i = *l;
		while (s[*l] != c && s[*l])
			*l += 1;
	}
	str = ft_strsub(s, (unsigned int)i, (*l - i));
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	*l;

	j = 0;
	k = 0;
	l = &k;
	if (!s || !c)
		return (NULL);
	i = ft_count_nb_word(s, c);
	if (s)
		tab = (char **)malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	while (i--)
	{
		tab[j] = ft_copy_word(s, l, c);
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
