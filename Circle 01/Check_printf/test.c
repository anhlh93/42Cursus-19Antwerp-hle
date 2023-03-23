/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:06:42 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 14:11:28 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	long double d = 3.1415926535;
	short int i = 3;
	long int j = 3;
	//wchar_t* wide_str = L"Wide String"
	
	printf("%g", 3.1456);
	printf("\n%g", 93000000.0);
	printf("\n%Lg", d);
	printf("\n%hd", i);
	printf("\n%ld", j);
	printf("\n%.3f", 1.2);
	printf("\n%.3f", 1.2348);
	//printf("\n%ls", wide_str);
	//printf("\n%s", wide_str);
	//wprintf("\n%s", wide_str);
	printf("\n%.3f\n%.3g\n%.3f\n%.3g\n", 100.2, 100.2, 3.1415926, 3.1415926);
	printf("\n%.3d", 10);
	printf("\n%.3d", 0);
	printf("\n%.5s", "abdcefg");
	printf("\n%5s", "abc");
	printf("\n%10.9f", 1.234);
	printf("\n%#x",12);
	printf("\n%x",12);
	printf("\n%05d", 10);
	printf("\n%d", -10);
	printf("\n|%-5d|%-5d|\n", 1, 2);
	printf("\n|%-+5d|%-+5d|\n", 1, 2);
	printf("\n%#010x\n", 12);		
	return (0);
}
