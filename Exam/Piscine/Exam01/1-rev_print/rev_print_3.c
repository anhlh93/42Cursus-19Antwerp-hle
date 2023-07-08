/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:04:40 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/06 22:15:41 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, str + i, 1);
		i--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}
