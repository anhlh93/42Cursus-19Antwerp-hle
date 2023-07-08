/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:42:51 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/07 00:00:34 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //atoi
#include <stdio.h> //printf

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	while (*str && *str == ' ')
		str++;
	sign = 1;
	if (*str == '-')
		sign = -1;
	str++;
	result = 0;
	while (*str && *str >= '0' && *str <= '9')
		result = result * 10 + (*str++) - 48;
	return (result * sign);
}

int	main(void)
{
	printf("USING ATOI: %i \n", atoi("+5674abc"));
	printf("USING FT_ATOI: %i \n", ft_atoi("+5674abc"));
	return (0);
}
