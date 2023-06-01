/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:06:39 by hle               #+#    #+#             */
/*   Updated: 2023/05/31 16:09:20 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	used[255];

	if (argc == 3)
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (i == 2 && !used[(unsigned char)(argv[i][j])])
					used[(unsigned char)(argv[i][j])] = 1;
				else if (i == 1 && used[(unsigned char)(argv[i][j])] == 1)
				{		
					used[(unsigned char)(argv[i][j])] = 2;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i--;	
		}			
	}
	write(1, "\n", 1);
	return (0);
}
