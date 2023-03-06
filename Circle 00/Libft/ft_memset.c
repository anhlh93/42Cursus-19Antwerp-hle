/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:44 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:49:51 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.
	ft_memset(str + 13, '.', 8*sizeof(char));
  	printf("After memset():  %s", str);
	return 0;
}
*/
