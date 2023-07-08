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

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	pos -= 1;
	while (pos > -1)
	{
		if (str[pos] == c)
			return (0);
		pos--;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
				if (check_doubles(str1, str1[i], i) == 1)
				{
					write(1, &str1[i], 1);
					break ;
				}
			j++;
		}			
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
