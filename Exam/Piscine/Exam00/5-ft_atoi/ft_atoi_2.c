/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:40:45 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/18 11:59:16 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //atoi
#include <stdio.h> //printf

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign *= -1;
	i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i] - 48;
	return (result * sign);
}

int	main(void)
{
	printf("USING ATOI: %d \n", atoi("   -56789ab"));
	printf("USING FT_ATOI: %d \n", ft_atoi("   -56789ab"));
	return (0);
}

