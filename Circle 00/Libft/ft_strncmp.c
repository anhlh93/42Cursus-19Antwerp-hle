/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:24:54 by hle               #+#    #+#             */
/*   Updated: 2023/02/27 14:12:13 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	while (!a && (s1[i] && s2[i]) && (i < n))
	{
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (!a && (s1[i] == '\0' || s2[i] == '\0') && (i < n))
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (a);
}
/*
int	main()
{
	printf("%d", ft_strncmp("HelloWorld","Hello", 6));
	printf("\n%d", strncmp("HelloWorld", "Hello", 6)); 
}
*/
