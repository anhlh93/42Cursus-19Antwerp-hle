/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:15 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:50:00 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cannot work with *s directly

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);
  
	ft_bzero(str, 0);
  	printf("After bzero():  %s", str);
	return 0;
}
*/
/*
Alternative, could just use ft_memset. Using memset(str,0,n)
Line 24 is actually str = (char*)s
*/
