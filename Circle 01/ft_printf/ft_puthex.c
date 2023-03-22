/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:50:11 by hle               #+#    #+#             */
/*   Updated: 2023/03/22 16:58:45 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_print_hex(unsigned int nb, const char format)
{
	if (nb > 16)
	{
		ft_print_ptr(nb / 16);
		ft_print_ptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nb - 10 + 'a');
			else if (format == "X")
				ft_putchar(nb - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, '0', 1));
	ft_print_hex(num, format);
	return (ft_hex_len(num));
}


