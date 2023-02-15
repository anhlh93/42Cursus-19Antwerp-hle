/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:20:08 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 11:22:48 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = 0;
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size)
	{
		j = 0;
		while (j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*
int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
*/
