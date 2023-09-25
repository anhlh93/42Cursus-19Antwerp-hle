/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instructions_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:42:35 by haianhle          #+#    #+#             */
/*   Updated: 2023/08/10 03:53:56 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"
#include "../printf/printf.h"

//not met yet
void	push_b(t_piles *pile, int bonus)
{
	int	i;

	if (pile->size_a)
	{
		pile->size_b++;
		i = pile->size_b;
		while (--i > 0)
			pile->b[i] = pile->b[i - 1];
		pile->b[0] = pile->a[0];
		i = -1;
		pile->size_a--;
		while (++i < pile->size_a)
			pile->a[i] = pile->a[i + 1];
		if (!bonus)
			ft_printf("pb\n");
	}
	else
		return ;
}

//not met yet
void	push_a(t_piles *pile, int bonus)
{
	int	i;

	if (pile->size_b)
	{
		pile->size_a++;
		i = pile->size_a;
		while (--i > 0)
			pile->a[i] = pile->a[i - 1];
		pile->a[0] = pile->b[0];
		i = -1;
		pile->size_b--;
		while (++i < pile->size_b)
			pile->b[i] = pile->b[i + 1];
		if (!bonus)
			ft_printf("pa\n");
	}
	else
		return ;
}
