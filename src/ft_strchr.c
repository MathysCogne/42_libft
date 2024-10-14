/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:08:52 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 16:22:26 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int find)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == find)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}
