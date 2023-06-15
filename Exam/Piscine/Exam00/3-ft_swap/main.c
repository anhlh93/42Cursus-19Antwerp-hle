/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:54:52 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/15 08:58:35 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 4;
	printf("Value of a and b before swap: %d and %d", a, b);
	ft_swap(&a, &b);
	printf("Value of a and b after swap: %d and %d", a, b);
	return (0);
}
