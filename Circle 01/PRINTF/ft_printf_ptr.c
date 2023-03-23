/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:09:07 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 11:16:40 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_ptr(uintptr_t nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	ft_print_ptr(uintptr_t nb)
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
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int	res;

	res = 0;
	res += write(1, "0x", 2);
	if (ptr == 0)
		res += write(1, "0", 1);
	else
	{
		ft_print_ptr(ptr);
		res += ft_len_ptr(ptr);
	}
	return (res);
}
