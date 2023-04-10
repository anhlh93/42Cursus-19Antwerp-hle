/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:14:45 by hle               #+#    #+#             */
/*   Updated: 2023/03/23 11:01:39 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "stdarg.h"
# include "unistd.h"
# include "stdlib.h"

void		ft_putchar(char c, int *res);
void		ft_putstr(char *s, int *res);
void		ft_putptr(size_t ptr, int *res);
void		ft_put_uint(unsigned int nb, int *res);
int			ft_printf(const char *format, ...);
void		ft_putnbr(int n, int *res);
void		ft_puthex(unsigned int num, char c, int *res);

#endif
