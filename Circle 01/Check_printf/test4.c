/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:02:27 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 16:01:18 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main()
{
	//test %c
	//test %s
	printf("\n NULL %s NULL ", NULL);
	//test %p
	printf("\n %p ",16);
	//test %d
	//test %i
	//test %u
	printf("\n %u ", -1);
	printf("\n %u ", -9);
	printf("\n %u ", -10);
	printf("\n %u ", -11);
	printf("\n %u ", -14);
	printf("\n %u ", -100);
	printf("\n %u ", INT_MIN);
	printf("\n %u ", LONG_MAX);
	printf("\n %u ", UINT_MAX);
	printf("\n %u ", ULONG_MAX);
	printf("\n %u ", 9223372036854775807LL);
	printf("\n %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	//test %x
	printf(" \n %x ", 16);
	//test %X
	//test %%
	//test mix
	//test no format
	//test random

}

