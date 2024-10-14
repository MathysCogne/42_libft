/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:45 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 16:55:40 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)mem;
	i = 0;
	while (i < size)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
