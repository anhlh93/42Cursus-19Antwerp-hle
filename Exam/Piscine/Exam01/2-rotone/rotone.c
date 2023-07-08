/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:07:27 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/07 12:16:41 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z')
			|| (*str >= 'A' && *str < 'Z'))
			*str += 1;
		else if (*str == 'z' || *str == 'Z')
			*str -= 25;
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
