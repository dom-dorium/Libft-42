/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:39 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/22 17:44:32 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlenght(int n)
{
	int	i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*nb;
	int			size;
	long int	nbr;

	nbr = n;
	size = intlenght(nbr);
	nb = ft_calloc(size + 1, sizeof(char));
	if (nb == NULL)
		return (NULL);
	if (n < 0)
	{
		nb[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		nb[0] = '0';
	while (nbr > 0)
	{
		nb[size - 1] = (nbr % 10) + '0';
		nbr /= 10;
		--size;
	}
	return (nb);
}
