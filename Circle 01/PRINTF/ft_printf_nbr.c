/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:00:48 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 10:52:03 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//number

void	ft_putnbr(int n, int *res)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*res) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', res);
		ft_putnbr(n * (-1), res);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10, res);
		ft_putchar(n % 10 + '0', res);
	}
}

//unsigned int

void	ft_put_uint(unsigned int nb, int *res)
{
	if (nb >= 10)
		ft_put_uint(nb / 10, res);
	ft_putchar(nb % 10 + '0', res);
}
