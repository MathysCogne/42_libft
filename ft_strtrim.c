/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:53:23 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/15 19:37:04 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim_str;

	if (!s1)
		return (NULL);
	if (!set)
	{
		trim_str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
		if (!trim_str)
			return (NULL);
		ft_strlcpy(trim_str, s1, ft_strlen(s1) + 1);
		return (trim_str);
	}
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		--end;
	trim_str = malloc(sizeof(char) * (end - start + 1));
	if (!trim_str)
		return (NULL);
	ft_strlcpy(trim_str, &s1[start], end - start + 1);
	return (trim_str);
}
