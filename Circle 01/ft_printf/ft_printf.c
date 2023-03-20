/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:48:47 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 16:06:36 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c);
{
    write(1, &c, 1);
    return (0);
}

int ft_conversion(va_list list, char format)
{
    int result;

    result = 0;
    if (char == 'c')
        result += ft_putchar(va_arg(list, format));
    else if (char == 's')
        result += ft_putstr(va_arg(list, format));
    else if (char == 'p')
        result += ft_putptr(va_arg(list, format));
    else if (char == 'd' || char == 'i')
        result += ft_putnbr(va_arg(list, format));
    else if (char == 'u')
        result += ft_put_unsinged_int(va_arg(list, format));
    else if (char == 'x')
        result += ft_puthex(va_arg(list, format));
    else if (char == 'X')
        result += ft_puthex(va_arg(list, format));
    else if (char == '%')
        result += ft_putchar('%');
    return (result);
}

int	ft_printf(const char *format, ...)
{
	int i;
    va_list list;
    int result;

    i = 0;
    result = 0;
    va_start(list, formal);
    while (format[i])
    {
        if (format[i] == '%')
        {
            result += ft_conversion(list, format[i + 1]);
            i++;
        }
        else
            result += ft_putchar(format[i]);
        i++;
    }
    va_end(list);
    return(result);
}
