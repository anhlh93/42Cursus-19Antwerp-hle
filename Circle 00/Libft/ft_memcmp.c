/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by hle               #+#    #+#             */
/*   Updated: 2023/02/15 14:11:41 by hle              ###   ########.fr       */
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
	if (n == 0)
		return (0);
	while (i < n - 1 && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
		i++;
	}
	return ((*ss1 - *ss2));
}
/*
int	main()
{
	const char	str1[] = "zyxbcdefgh";
	const char	str2[] = "abcdefgxyz";
	
	printf("%d", ft_memcmp(str1,str2, 0));
	printf("\n%d", memcmp(str1, str2, 0)); 
}
*/
