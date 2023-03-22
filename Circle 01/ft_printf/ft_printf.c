/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:48:47 by hle               #+#    #+#             */
/*   Updated: 2023/03/22 16:43:51 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_type(va_list vlist, const char c)
{
	int	result;

	result = 0;
	if (c == 'c')
		result += ft_putchar(va_arg(vlist, int));
	else if (c == 's')
		result += ft_putstr(va_arg(vlist, char *));
	else if (c == 'p')
		result += ft_putptr(va_arg(vlist, uintptr_t));
	else if (c == 'd' || c == 'i')
		result += ft_putnbr(va_arg(vlist, int));
	else if (c == 'u')
		result += ft_put_uint(va_arg(vlist, unsigned int));
	else if (c == 'x' || c == 'X')
		result += ft_puthex(va_arg(vlist, unsigned int), format);
	else if (c == '%')
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	vlist;

	i = 0;
	result = 0;
	va_start(vlist, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			result += ft_type(vlist, format[i + 1]);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(vlist);
	return (result);
}
