/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:44:23 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 11:42:17 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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
/* Explain the code
- Check if dst and src are NULL --> return NULL
- Create 2 unsigned char d and s to store the addresses of dst and src. 
- i is the counter of for the numbers of bytes copied, j is the direction of copy operation. If dst > src, we copy from backward.
*/