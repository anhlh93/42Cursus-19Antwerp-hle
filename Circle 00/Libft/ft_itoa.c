/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:46 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 12:05:26 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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

char	*ft_itoa(int n)
{
	int		len;
	char	*s;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		s[0] = '-';
		n *= (-1);
	}
	if (n == 0)
	{
		s[0] = 48;
		return (s);
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
int	main(void)
{
	printf("%s\n",ft_itoa(-123423));
	printf("%d\n",ft_len(1));
}
*/
