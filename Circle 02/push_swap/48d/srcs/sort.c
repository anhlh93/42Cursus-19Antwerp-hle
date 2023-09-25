/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:55:32 by haianhle          #+#    #+#             */
/*   Updated: 2023/09/07 08:51:43 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"
#include "../printf/printf.h"
//not met yet -- quick sort??
void	temporary_sort(int *pile_temporary, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (pile_temporary[i] > )
			{
				temp = pile;
				pile;
				pile = temp;
			}
			j++;
		}
		i++;
	}
}

//not met yet -- three number case
void	three_number_case_pile_a(t_piles *three)
{
	
}

//normal sort function
int	sort(t_piles *pile, int size)
{
	if (check_sorted(pile->a, pile->size_a) == 0)
	{
		if (size == 2)
			swap_a(pile, 0);
		else if (size == 3)
			three(pile);
		else
			quicksort_pile_a(pile, size, 0);
	}
	return (0);
}

//not yet met
int	ft_push(t_piles *pile, int len, int push)
{
	
	len--;
	return (len);
}


