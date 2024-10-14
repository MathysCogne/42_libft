/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:33:05 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 18:01:31 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

size_t	count_worlds(char *str, char sep)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] && !is_sep(str[i], sep))
		{
			w++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
	}
	return (w);
}

char	*malloc_worlds(char *str, char sep)
{
	size_t	len;
	size_t	i;
	char	*w;

	len = 0;
	while (str[len] && !is_sep(str[len], sep))
		len++;
	w = malloc(sizeof(char) * (len + 1));
	if (!w)
		return (NULL);
	i = 0;
	while (i < len)
	{
		w[i] = str[i];
		i++;
	}
	w[i] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	w;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_worlds(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (s[i] && !is_sep(s[i], c))
		{
			tab[w] = malloc_worlds(&s[i], c);
			w++;
			while (s[i] && !is_sep(s[i], c))
				i++;
		}
	}
	tab[w] = NULL;
	return (tab);
}
