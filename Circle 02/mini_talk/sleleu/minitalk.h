/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:28:31 by hle               #+#    #+#             */
/*   Updated: 2023/09/20 15:28:31 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

/* COLORS */
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define END	"\x1b[0m"

/* STRUCTURE */
typedef struct s_struct
{
	char		octet;
	char		*message;
	pid_t		client_pid;
}		t_struct;

/* CLIENT */
int		ft_atoi(char *str);
void	ft_client_error(int i);
void	ft_end_signal(int signum);
void	ft_send_signal(int pid, char octet);

/* SERVER */
char	*ft_charjoin(char *s1, char s2);
void	ft_handler(int signum, siginfo_t *c_pid, void *tmp);

#endif
