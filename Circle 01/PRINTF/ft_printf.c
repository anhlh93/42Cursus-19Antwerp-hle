/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:48:47 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 11:13:49 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character

void	ft_putchar(char c, int *res)
{
	write(1, &c, 1);
	(*res)++;
}

static void	ft_type(va_list *vlist, char c, int *i, int *res)
{
	if (c == 'c')
		ft_putchar(va_arg(*vlist, int), res);
	else if (c == 's')
		ft_putstr(va_arg(*vlist, char *), res);
	else if (c == 'p')
		ft_putptr(va_arg(*vlist, size_t), res);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*vlist, int), res);
	else if (c == 'u')
		ft_put_uint(va_arg(*vlist, unsigned int), res);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(*vlist, unsigned int), c, res);
	else if (c == '%')
		ft_putchar('%', res);
	else
		(*i)--;
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
			i++;
			ft_type(&vlist, format[i], &i, &result);
		}
		else
		{
			ft_putchar((char)format[i], &result);
		}
		i++;
	}
	va_end(vlist);
	return (result);
}
