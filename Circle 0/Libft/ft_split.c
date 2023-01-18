/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:37 by hle               #+#    #+#             */
/*   Updated: 2023/01/18 10:45:05 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	if (n == 0)
		return (s);
	a = (void *)malloc(sizeof (int) * (n + 1))
	j = 0;
	k = 0;
	while (s[j])
	{
		if (s[j] == c)
			
		j++;
	}
	
}
/*
** identifty string s length and number of character "c"
** if number of c = 0, return string s
** stuck on create a list, and then creat a new list using malloc. 

