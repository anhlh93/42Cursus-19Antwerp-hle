/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:48:56 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/18 23:30:39 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write

char	*ft_rev_print (char *str)
{
	while (*str)
		str++;
	str--;
	while (*str)
	{
		write(1, str, 1);
		str--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(*av);
	write(1, "\n", 1);
	return (0);
}
