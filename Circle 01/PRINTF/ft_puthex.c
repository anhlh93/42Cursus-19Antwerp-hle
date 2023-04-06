/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:50:11 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 10:53:49 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//hexadecimal - x or X

void	ft_puthex(unsigned int num, char c, int *res)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (c == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (num == 0)
	{
		ft_putchar('0', res);
		return ;
	}
	while (num != 0)
	{
		string[i++] = base_character [num % 16];
		num /= 16;
	}
	while (i--)
		ft_putchar(string[i], res);
}
