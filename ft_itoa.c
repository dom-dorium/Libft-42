/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:39 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/27 16:27:49 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*nb;
	int			size;
	long int	nbr;

	nbr = n;
	size = ft_intlen(nbr);
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
