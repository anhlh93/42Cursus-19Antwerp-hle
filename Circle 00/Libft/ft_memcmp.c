/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:25:37 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	if (!s1 && !s2)
		return (0);
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
#include <stdio.h>
#include <string.h>
int	main()
{
	const char	str1[] = "zyxbcdefgh";
	const char	str2[] = "abcdefgxyz";
	
	printf("%d", ft_memcmp(str1,str2, 0));
	printf("\n%d", memcmp(str1, str2, 0)); 
}
*/
