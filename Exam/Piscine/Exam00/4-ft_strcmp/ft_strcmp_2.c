/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:04:20 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/18 15:45:49 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <string.h> //strcmp

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	printf("USING STRCMP: %d \n", strcmp("Hello ", "Hello"));
	printf("USING FT_STRCMP: %d \n", ft_strcmp("Hello ", "Hello"));
	return (0);
}
