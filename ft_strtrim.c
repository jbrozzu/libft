/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:54:30 by jbrozzu           #+#    #+#             */
/*   Updated: 2014/12/08 18:59:24 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	str = (char *)malloc(sizeof(char) * (unsigned int)(j - i));
	if (!str)
		return (NULL);
	k = 0;
	while (s[i] && i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
