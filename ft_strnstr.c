/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:19:13 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/15 20:03:31 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str && len == 0)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && (i + j) < len && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
