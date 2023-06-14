/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:19:36 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/14 23:49:33 by haianhle         ###   ########.fr       */
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
		if (i % 2 == 0)
			write(1, &digit, 1);
		else
		{
			temp = digit - 32;
			write(1, &temp, 1);
		}
		digit++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
