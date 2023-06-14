/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:50:23 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/14 23:56:15 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	digit;
	char	temp;
	int		i;

	i = 0;
	digit = 'a';
	while (i <= 25)
	{
		temp = digit - (i++ % 2) * 32;
		write(1, &temp, 1);
		digit++;
	}
	write(1, "\n", 1);
	return (0);
}
