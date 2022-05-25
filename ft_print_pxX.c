/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pxX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:25:27 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/28 13:21:29 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalow(unsigned int p)
{
	if (p >= 16)
		ft_hexalow(p / 16);
	write(1, &"0123456789abcdef"[p % 16], 1);
	return (ft_hexalen(p));
}

int	ft_hexaup(unsigned int p)
{
	if (p >= 16)
		ft_hexaup(p / 16);
	write(1, &"0123456789ABCDEF"[p % 16], 1);
	return (ft_hexalen(p));
}

int	ft_hexalen(unsigned long p)
{
	int	i;

	i = 1;
	while (p >= 16)
	{
		p /= 16;
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long p)
{
	int	i;

	write(1, "0x", 2);
	i = 2;
	i += ft_hexaptr(p);
	return (i);
}

int	ft_hexaptr(unsigned long p)
{
	if (p >= 16)
		ft_hexaptr(p / 16);
	write(1, &"0123456789abcdef"[p % 16], 1);
	return (ft_hexalen(p));
}
