/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:32:49 by haianhle          #+#    #+#             */
/*   Updated: 2023/07/14 06:52:27 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//write
#include <stdio.h>//printf

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len--;
	while (len > i)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "0123456789";

	printf("STRING BEFORE REVERSE: %s \n", s);
	ft_strrev(s);
	printf("STRING AFTER REVERSE: %s \n", s);
	return (0);
}
