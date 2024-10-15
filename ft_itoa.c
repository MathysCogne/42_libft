/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:44:00 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/15 18:51:04 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*s_nb;

	len = get_size(n);
	nbr = n;
	s_nb = malloc(sizeof(char) * (len + 1));
	if (!s_nb)
		return (NULL);
	s_nb[len] = '\0';
	if (n < 0)
	{
		s_nb[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		s_nb[0] = '0';
	--len;
	while (nbr > 0)
	{
		s_nb[len] = (nbr % 10) + '0';
		nbr /= 10;
		--len;
	}
	return (s_nb);
}
