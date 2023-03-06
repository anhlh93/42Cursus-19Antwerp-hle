/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:07:18 by hle               #+#    #+#             */
/*   Updated: 2023/03/06 11:20:45 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: Applies the function ’f’ to each character of the
** string ’s’, and passing its index as first argument
** Each character is passed by
** address to ’f’ to be modified if necessary.
** Param. #1 The string on which to iterate
** Param. #2 The function to apply to each character.
** Return value None
** External functions None
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
** Special case: s not exist
** str[i] = f(i, s[i]) <-- because unsigned int, char
*/
/*
char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}

int	main()
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return 0;
}
*/
