/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:23:24 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/25 13:49:58 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write

char	*ft_rev_print(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	while (len > 0)
	{
		write(1, str + len, 1);
		len--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_print(*av);
	}
	write(1, "\n", 1);
	return (0);
}
