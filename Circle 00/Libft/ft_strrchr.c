/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:24:41 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:51:56 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char *)(s + l));
		l--;
	}
	return (NULL);
}
/*
#include <string.h>
int	main(void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = 'w';
	char	*ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
