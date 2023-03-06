/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:30 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 10:53:51 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ls, const char *ss, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ss && !ls)
		return (NULL);
	if (ss[0] == '\0')
		return ((char *)ls);
	while (ls[i] != '\0')
	{
		j = 0;
		while ((i + j) < n && ls[i + j] == ss[j])
		{
			if (ls[i + j] == '\0')
				return ((char *)ls + i);
			j++;
		}
		if (ss[j] == '\0')
			return ((char *)ls + i);
		i++;
	}
	return (NULL);
}
/*
j == ft_strlen(ss) equals ss[j] == "/0" 
*/
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	largestring[20] = "Foo Bar Baz";
	const char	smallstring[10] = "Bar";
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("String after locates little string |%s| is - |%s|\n", smallstring, ptr);
	return (0);
}
*/
/*
** If needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack, NULL is returned;
** otherwise a pointer to the first character 
** of the first occurrence of needle is returned.
** The strnstr() function locates the first occurrence of 
** the null-terminated string needle in the string haystack, 
** where not more than len characters are searched.
*/
