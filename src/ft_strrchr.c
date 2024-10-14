/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:22:48 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 16:26:50 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *string, int find)
{
	size_t	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i - 1] == find)
			return ((char *)&string[i]);
		--i;
	}
	return (NULL);
}
