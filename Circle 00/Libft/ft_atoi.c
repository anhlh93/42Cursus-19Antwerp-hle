/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:37 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 12:11:18 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	*str;

	str = "2142";
	printf("FT_ATOI (%s) = %d\n\n", str, ft_atoi(str));
	return (0);
}
*/
/* Code explaination
- First loop to eliminate special character such as \t, \n or space
- Next, loop to determine sign of the number (positive or negative)
- Next, loop to create a new number from existing strings of characters.
*/
