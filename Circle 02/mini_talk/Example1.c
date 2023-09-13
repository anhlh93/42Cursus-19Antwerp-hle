/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:04:50 by hle               #+#    #+#             */
/*   Updated: 2023/09/13 16:11:07 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	sig_handler(int signum)
{
	printf("\nInside handler function\n");
	//return type of the handler function should be void
}

int	main()
{
	signal(SIGINT, sig_handler);//Register signal handler
	for (int i = 1;; i++)//infinite loop
	{
		printf("%d: Inside main function\n",i);
		sleep(1); //Delay for 1 second
	}
	return 0;
}
