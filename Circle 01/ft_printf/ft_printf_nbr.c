/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:00:48 by hle               #+#    #+#             */
/*   Updated: 2023/03/22 16:47:59 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= (-1);
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*special(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = (char *)malloc(12 * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
	}
	else
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "0", 2);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;

	len = ft_len(n);
	if (n == -2147483648 || n == 0)
		return (special(n));
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n *= (-1);
	}
	s[len--] = '\0';
	while (n > 0)
	{
		s[len--] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

int	ft_putnbr(int n)
{
	int	res;
	char	*num;

	num = ft_itoa(n);
	res = ft_putstr(num);
	free(num);
	return (res);
}

int	ft_put_uint(unsigned int nb)
{
	int	res;
	char	*num;
	int	n;

	n = (int) nb;
	res = 0;
	if (n == 0)
		res += write(1, '0', 1);
	else
	{
		num = ft_itoa(n);
		res += ft_putstr(num);
		free(num);
	}
	return (res);
}
