/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:24:16 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 09:59:41 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'm';
	printf("%c -> %c", c, tolower(c));
	c = 'D';
	printf("\n%c -> %c", c, tolower(c));
	c = '9';
	printf("\n%c -> %c", c, tolower(c));
	c = 'm';
	printf("\n%c -> %c", c, ft_tolower(c));
	c = 'D';
	printf("\n%c -> %c", c, ft_tolower(c));
	c = '9';
	printf("\n%c -> %c", c, ft_tolower(c));
	return (0);
}
*/
