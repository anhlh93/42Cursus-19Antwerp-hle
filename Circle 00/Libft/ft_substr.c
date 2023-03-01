/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:48:49 by hle               #+#    #+#             */
/*   Updated: 2023/03/01 12:08:31 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	finish;
	char	*sub;

	if (!s)
		return (0);
	finish = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else
		finish = s_len - start;
	if (finish > len)
		finish = len;
	sub = (char *)malloc(sizeof(char) * (finish + 1));
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, finish + 1);
	return (sub);
}
