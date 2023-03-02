/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:37 by hle               #+#    #+#             */
/*   Updated: 2023/03/02 09:32:41 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_free(char **s2, int i)
{
	while (i > 0)
	{
		i--;
		free(s2[i]);
	}
	free(s2);
	return (0);
}

static char	*ft_putstr(char const *s, char *s3, int i, int l)
{
	int	j;

	j = 0;
	while (l > 0)
	{
		s3[j] = s[i - l];
		j++;
		l--;
	}
	s3[j] = '\0';
	return (s3);
}

static char	**ft_split_word(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	l;

	i = 0;
	word = 0;
	l = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			l++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (l + 1));
		if (!s2[word])
			return (ft_free(s2, word));
		ft_putstr(s, s2[word], i, l);
		l = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	num_words;
	char			**s2;

	if (!s)
		return (0);
	num_words = ft_count_word(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	s2 = ft_split_word(s, c, s2, num_words);
	return (s2);
}
/*
int main(void)
{
    char const *s1 = "lorem ipsum dolor sit amet ";
    char const *s2 = "   lorem   ipsum dolor     sit amet,    ";
    char const *s3 = "";
    char **result;

    // test 1
    result = ft_split(s1, ' ');
    for (int i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
    // Expected output: "Hello", "world", "!"

    // test 2
    result = ft_split(s2, ' ');
    for (int i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
    // Expected output: "A"

    // test 3
    result = ft_split(s3, ' ');
    for (int i = 0; result[i] != NULL; i++)
        printf("%s\n", result[i]);
    // Expected output: nothing printed (i.e. empty array)

    return (0);
}
*/
