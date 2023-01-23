/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:24:03 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 09:59:20 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'm';
	printf("%c -> %c", c, toupper(c));
	c = 'D';
	printf("\n%c -> %c", c, toupper(c));
	c = '9';
	printf("\n%c -> %c", c, toupper(c));
	c = 'm';
	printf("\n%c -> %c", c, ft_toupper(c));
	c = 'D';
	printf("\n%c -> %c", c, ft_toupper(c));
	c = '9';
	printf("\n%c -> %c", c, ft_toupper(c));
	return (0);
}
*/