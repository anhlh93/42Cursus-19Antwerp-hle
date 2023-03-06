/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:50 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 12:13:16 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb && total_size / nmemb != size)
		return (NULL);
	a = (void *)malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, (nmemb * size));
	return (a);
}
/*
#include <stdlib.h>
#include <stdio.h>
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
