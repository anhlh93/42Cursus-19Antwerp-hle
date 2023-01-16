/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:49:25 by hle               #+#    #+#             */
/*   Updated: 2023/01/16 09:41:02 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_len;
	char	*new;
	int		i;
	int		j;

	new_len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s1, ft_strlen(s1));
	i = ft_strlen(s1);
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
