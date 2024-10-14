/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:36:45 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 15:39:37 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove_backward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	ft_memmove_foward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = n;
	while (i < n)
	{
		d[i - 1] = s[i - 1];
		--i;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		ft_memmove_forward(d, s, n);
	}
	else
	{
		ft_memmove_backward(d, s, n);
	}
	return (dest);
}
