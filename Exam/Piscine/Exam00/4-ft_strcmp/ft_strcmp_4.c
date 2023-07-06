/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:54:21 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/01 15:06:28 by haianhle         ###   ########.fr       */
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
	if (*s1 > *s2)
		return (1);
	else if (*s1 < *s2)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	printf("Using STRCMP: %i\n", strcmp("Hello W", "Hello "));
	printf("Using FT_STRCMP: %i\n", ft_strcmp("Hello W", "Hello "));
	return (0);
}
