/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:38:55 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/21 23:47:41 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //strcmp
#include <stdio.h> //printf	

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	else if (*s1 - *s2 == 0)
		return (0);
	else
		return (-1);
}

int	main(void)
{
	printf("USING STRCMP: %i \n", strcmp("Hello", "Hello "));
	printf("USING FT_STRCMP: %i \n", ft_strcmp("Hello", "Hello "));
	return (0);
}
