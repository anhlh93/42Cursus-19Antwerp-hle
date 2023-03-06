/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:46 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 10:49:21 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* Code explaination
** Count number of character of integer n (include '-' sign) (variable len)
** Use malloc creat a new string with size of len + 1
** Special case: number smaller or equal 0
** Loop to fill string from end to beginning (use module)
*/
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%s\n",ft_itoa(-1234));
	printf("%d\n",ft_len(-2147483647));
}
*/
