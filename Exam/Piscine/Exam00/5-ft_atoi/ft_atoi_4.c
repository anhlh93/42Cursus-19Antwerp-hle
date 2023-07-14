/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:16:23 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/14 07:26:53 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//atoi
#include <stdio.h>//printf

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str) - 48;
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("USING ATOI: %i\n", atoi("   /123456"));
	printf("USING FT_ATOI: %i\n", ft_atoi("   /123456"));
	return (0);
}
