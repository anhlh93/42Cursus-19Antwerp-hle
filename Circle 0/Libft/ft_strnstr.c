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
/* If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.
*/

char	*ft_strnstr(const char *ls, const char *ss, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	ls_len;

	i = 0;
	ls_len = ft_strlen(ls);
	if (!ss !ls)
		return (0);
	if (ss[0] == "/0"  ls == ss)
		return (ls);
	while (ls[i] != "/0"):
	{
		j = 0;
		while (i + j < n && ls[i + j] == ss[j]):
			j++;
		if (j == ft_strlen(ss)):
			return (ls + i)		
		i++;
	}
	return (0);
}
/*

/*
int	main(void)
{
	const char	largestring[20] = "Foo Bar Baz";
	const char	smallstring[10] = "Bar";
	char	*ptr;

	ptr = strnstr(largestring, smallstring, 4);
	printf("String after locates little string |%s| is - |%s|\n", smallstring, ptr);
	return (0);
}
*/
