/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:14:56 by hle               #+#    #+#             */
/*   Updated: 2023/09/25 14:29:57 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	used[255] = {0};

	if (ac == 3)
	{
		i = 2;
		while (i > 0)
		{
			j = 0;
			while (av[i][j])
			{
				if (i == 2 && used[(unsigned char)(av[i][j])] == 0)
					used[(unsigned char)(av[i][j])] = 1;
				else if (i == 1 && used[(unsigned char)(av[i][j])] == 1)
				{
					used[(unsigned char)(av[i][j])] = 2;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
