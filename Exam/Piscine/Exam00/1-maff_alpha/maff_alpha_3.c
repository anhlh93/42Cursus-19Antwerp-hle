/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 00:01:48 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/07 00:08:23 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write

int	main(void)
{
	char	c;
	char	temp;
	int		i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		temp = (c++) - (i % 2) * 32;
		write(1, &temp, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
