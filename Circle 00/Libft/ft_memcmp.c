/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 11:58:08 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
		i++;
	}
	return ((int)(*ss1 - *ss2));
}
/*
int	main()
{
	const char	str1[] = "HelloWorld";
	const char	str2[] = "Hello";
	
	printf("%d", ft_memcmp(str1,str2, 6));
	printf("\n%d", memcmp(str1, str2, 6)); 
}
*/
