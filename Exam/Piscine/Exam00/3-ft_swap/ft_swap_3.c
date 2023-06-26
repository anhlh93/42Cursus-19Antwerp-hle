/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:31:33 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/21 23:36:33 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 5;
	printf("BEFORE SWAP: %i %i \n", a, b);
	ft_swap(&a, &b);
	printf("AFTER SWAP: %i %i \n", a, b);
	return (0);
}
