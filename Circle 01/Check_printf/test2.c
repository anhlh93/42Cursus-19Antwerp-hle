/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:32:17 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 14:01:32 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
//test va_start, va_arg, va_list
double	average(int count, ...)
{
	va_list	ap;
	double	sum;
	int	i;

	i = 0;
	sum = 0;
	va_start(ap, count);
	while (i < count)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return	(sum/count);
}

int	main(void)
{
	printf("%f", average(4, 1, 2, 3, 4));
	printf("\n%f", average(3, 31, 32, 33));
	return (0);
}
