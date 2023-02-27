/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:50 by hle               #+#    #+#             */
/*   Updated: 2023/02/27 12:07:15 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	if (nmemb == 0 || size == 0)
		return (ft_calloc(1,1));
	a = (void *)malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, (nmemb * size));
	return (a);
}
/*
int	main(void)
{
	int	i;
	int	n;
	int	*a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);
	a = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The numbers entered are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	free(a);
	return (0);
}
*/
