/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:44:23 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 10:28:49 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;

	if (!dst && !src)
		return (NULL);
	i = 0;
	j = 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[50] = "Geeks"; 
	char	str2[50] = "Quiz"; 
	
	puts("str1 before memmove ");
	puts(str1);
	// Copies contents of str2 to str1
	memmove (str1, str2, 4);
	puts("\nstr1 after memmove ");
	puts(str1);
	return 0;
}
*/
