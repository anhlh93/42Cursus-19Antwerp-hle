/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:37 by hle               #+#    #+#             */
/*   Updated: 2023/01/19 11:31:43 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != "/0")
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != "/0" && s[i] != c)
				i++;
		}
	}
	return (count);

static char	**ft_split_word(char const *s, char c, char **s2, int num_words)
{
	int	word;
	int	word_len;

	word = 0;
	word_len = 0;
	while (word < num_words)
	{
	
	}
	s2[word] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char		**s2;
	int	num_words;

	if (!s):
		return (0);
	num_words = ft_count_word(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2):
		return (0);
	ft_split_word(s, c, s2, num_words);
	return (s2);
}

/* Code explaination
- identifty string s length and number of character "c"
- if s is null, return Null
- Create 4 sub - functions
- ft_count_word: count the number of words, seperated by letter "c". Use static so the functions can be only used inside the program. 
- After count number of words, create array of list s2 (using malloc)
- ft_split_word:: parameter - string, character, new list
*/
