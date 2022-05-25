/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:44:24 by djeannot          #+#    #+#             */
/*   Updated: 2022/04/28 13:30:29 by djeannot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		ret;

	if (!format)
		return (0);
	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			ret++;
		}
		else
			ret += check_format(format[++i], args);
	}
	va_end(args);
	return (ret);
}

int	check_format(char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'p')
		i += ft_putptr(va_arg(args, unsigned long));
	else if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		i += ft_putnbrpos(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_hexalow(va_arg(args, unsigned long));
	else if (format == 'X')
		i += ft_hexaup(va_arg(args, unsigned long));
	else if (format == '%')
	{
		write (1, "%", 1);
		i++;
	}
	return (i);
}
