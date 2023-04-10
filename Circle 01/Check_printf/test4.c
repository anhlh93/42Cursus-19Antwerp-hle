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
	printf("\n Test results of %%c");
	printf("\n %c %c %c ", '0', 0, '1');
	printf("\n %c %c %c ", '1', '2', '3');
	printf("\n %c %c %c ", '2', 1, '0');

	//test %s
	printf("\n Test results of %%s");
	printf("\n %s %s ", "", "-");
	printf("\n %s %s ", " - ", "");
	printf("\n %s %s %s %s %s", " - ", "", "4", "", "s2");
	printf("\n %s %s %s %s %s", " - ", "", "4", "", "2 ");
	printf(" NULL %s NULL ", NULL);

	//test %p
	printf("\n Test results of %%p");
	printf("\n %p ",16);
	
	//test %d
	printf("\n Test results of %%d");

	//test %i
	printf("\n Test results of %%i");

	//test %u
	printf("\n Test results of %%u");
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
	printf("\n Test results of %%x");
	printf(" \n %x ", 16);
	printf(" \n %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42))
	
	//test %X
	printf("\n Test results of %%X");
	printf("\n %X ", -1);
	printf("\n %X ", 16);
	printf("\n %X ", -9);
	printf("\n %X ", -11);
        printf("\n %X ", -12);
        printf("\n %X ", -14);
	printf("\n %X ", -15);
        printf("\n %X ", -16);
        printf("\n %X ", -99);
        printf("\n %X ", -101);
        printf("\n %X ", INT_MAX);
        printf("\n %X ", LONG_MAX);

	//test %%
	printf("\n Test results of %%%");

	//test mix
	printf("\n Test results of mix");

	//test no format
	printf("\n Test results of no format");

	//test random
	printf("\n Test results of no random");
}

