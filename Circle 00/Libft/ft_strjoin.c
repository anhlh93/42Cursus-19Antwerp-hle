/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:49:25 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:32:22 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result = ft_strjoin(s1, s2);

	if (result == NULL)
	{
		fprintf(stderr, "Error: ft_strjoin returned NULL\n");
		exit(1);
	}

	printf("%s\n", result); // Output: "Hello, world!"

	free(result);
	return (0);
}
*/
