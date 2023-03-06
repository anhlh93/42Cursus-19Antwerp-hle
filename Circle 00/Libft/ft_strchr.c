/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:24:29 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:51:45 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s && *s != '\0')
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = 'w';
	char	*ret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
// Locate character in string
