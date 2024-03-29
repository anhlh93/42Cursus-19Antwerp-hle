/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:28:13 by hle               #+#    #+#             */
/*   Updated: 2023/09/20 15:28:16 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

unsigned int	g_bits = 0;

int	ft_atoi(char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

void	ft_client_error(int i)
{
	if (i == 1)
		ft_printf(RED"❌ ERROR : Invalid argument ❌\n"END);
	else if (i == 2)
		ft_printf(RED"❌ Sigaction Error ❌\n"END);
	else if (i == 3)
		ft_printf(RED"❌ ERROR : Bad PID ❌\n"END);
	exit(EXIT_FAILURE);
}

void	ft_end_signal(int signum)
{
	if (signum == SIGUSR1)
	{
		ft_printf(GREEN"⚡ %d bits "END, g_bits);
		ft_printf(YELLOW"successfully sent ! ⚡\n"END);
	}
}

void	ft_send_signal(int pid, char octet)
{
	int	i;

	if (pid <= 0)
		ft_client_error(3);
	i = 7;
	while (i >= 0)
	{
		if (octet & 1 << i)
		{
			if (kill(pid, SIGUSR1) != 0)
				ft_client_error(3);
		}
		else
		{
			if (kill(pid, SIGUSR2) != 0)
				ft_client_error(3);
		}
		usleep(400);
		i--;
	}		
}

int	main(int argc, char **argv)
{
	int					i;
	pid_t				pid;
	struct sigaction	sa;

	if (argc != 3)
		ft_client_error(1);
	i = 0;
	sa.sa_handler = ft_end_signal;
	pid = ft_atoi(argv[1]);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		ft_client_error(2);
	while (argv[2][i])
	{
		ft_send_signal(pid, argv[2][i]);
		i++;
		g_bits += 8;
	}
	ft_send_signal(pid, '\0');
	return (0);
}


