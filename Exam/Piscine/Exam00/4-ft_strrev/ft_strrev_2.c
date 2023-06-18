/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haianhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:00:38 by haianhle          #+#    #+#             */
/*   Updated: 2023/06/17 22:05:44 by haianhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
	return (str);
}
