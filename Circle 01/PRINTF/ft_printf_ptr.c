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

//pointer

void	ft_putptr(size_t ptr, int *res)
{
	char	string[25];
	char	*base_character;
	int		i;

	i = 0;
	base_character = "0123456789abcdef";
	write(1, "0x", 2);
	(*res) += 2;
	if (ptr == 0)
	{
		ft_putchar('0', res);
		return ;
	}
	while (ptr != 0)
	{
		string[i++] = base_character[ptr % 16];
		ptr /= 16;
	}
	while (i--)
		ft_putchar(string[i], res);
}
