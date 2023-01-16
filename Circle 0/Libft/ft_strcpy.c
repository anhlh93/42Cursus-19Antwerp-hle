/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:48:31 by hle               #+#    #+#             */
/*   Updated: 2022/11/03 12:51:40 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Hello";
	char src1[] = "Hello";
	char dest[] = "";
	char dest1[] = "";

	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}
*/
