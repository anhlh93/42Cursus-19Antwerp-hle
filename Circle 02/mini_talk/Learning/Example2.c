/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:23:22 by hle               #+#    #+#             */
/*   Updated: 2023/09/18 14:26:54 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int	main()
{
	signal(SIGINT, SIG_IGN);//Register signal handler
	for (int i = 1;; i++)//infinite loop
	{
		printf("%d: Inside main function\n",i);
		sleep(1); //Delay for 1 second
	}
	return 0;
}

