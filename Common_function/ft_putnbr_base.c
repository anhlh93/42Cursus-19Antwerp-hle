/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:57 by hle               #+#    #+#             */
/*   Updated: 2022/11/08 15:09:22 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(str);
	if (str[i] == '\0' && k == 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] <= 32 || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < k)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	error;
	int	len;
	int	nb;

	error = check(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}	
}
/*
int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(-478773672, "0123456789");
	printf("\n");
	ft_putnbr_base(531231233, "0123456789abcdef");
}
*/
