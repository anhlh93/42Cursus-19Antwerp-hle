/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:32:12 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 15:13:17 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{	
		if (base[i] <= 32 || base[i] == '-' || base[i] == '+' || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base_test(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_start(char *str, int *i)
{
	int	mult;

	mult = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			mult *= -1;
		*i += 1;
	}
	return (mult);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nb;
	int		tmp;
	int		len;

	len = ft_atoi_base_error(base);
	if (len >= 2)
	{
		nb = 0;
		i = 0;
		sign = ft_atoi_base_start(str, &i);
		tmp = ft_atoi_base_test(str[i], base);
		while (tmp != -1)
		{
			nb = (nb * len) + tmp;
			i++;
			tmp = ft_atoi_base_test(str[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}
/*
int	main (void)
{
	printf("%d\n", ft_atoi_base("   +++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("        ---101010", "01"));
	printf("%d\n", ft_atoi_base("   +---640", "0123456789abcdef"));
}
*/
