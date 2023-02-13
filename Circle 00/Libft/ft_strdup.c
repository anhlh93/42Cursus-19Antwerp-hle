/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:58 by hle               #+#    #+#             */
/*   Updated: 2023/01/26 11:03:13 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** A copy of source is created dynamically
** and pointer to copy is returned.
*/
char	*ft_strdup(char *s)
{
	char	*new;
	size_t	size;

	size = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (0);
	ft_memcpy(new, s, size);
	new[size] = '\0';
	return (new);
}
/*
int	main()
{
	char	source[] = "GeeksForGeeks";
	char	*target;
       
	target	= strdup(source);
	printf("%s", target);
	return (0);
}
*/
