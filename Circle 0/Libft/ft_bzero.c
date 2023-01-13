/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:15 by hle               #+#    #+#             */
/*   Updated: 2023/01/13 15:19:01 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "stdio.h"
#include "string.h"
//cannot work with *s directly

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char		*str;
	
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);
  
	ft_bzero(str, 0);
  	printf("After bzero():  %s", str);
	return 0;
}
*/
