/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:22:48 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/15 20:21:20 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int find)
{
	size_t	i;

	i = ft_strlen(string);
	if (find == '\0')
		return ((char *)&string[i]);
	while (i > 0)
	{
		if (string[i - 1] == (unsigned char)find)
			return ((char *)&string[i - 1]);
		--i;
	}
	return (NULL);
}
