/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:30 by hle               #+#    #+#             */
/*   Updated: 2023/01/16 17:02:57 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	largestring[20] = "Foo Bar Baz";
	const char	smallstring[10] = "Bar";
	char	*ptr;

	ptr = strnstr(largestring, smallstring, 4);
	printf("String after locates little string |%s| is - |%s|\n", smallstring, ptr);
	return (0);
}
