/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:05:28 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 10:01:44 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_checkset(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_checkset(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
