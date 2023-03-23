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

int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_len_ptr(uintptr_t nb);
int		ft_putptr(uintptr_t ptr);
void	ft_print_ptr(uintptr_t nb);
int		ft_len(int n);
int		ft_put_uint(unsigned int nb);
int		ft_type(va_list vlist, const char c);
int		ft_printf(const char *format, ...);
int		ft_putnbr(int n);
int		ft_put_uint(unsigned int nb);
int		ft_hex_len(unsigned int num);
void	ft_print_hex(unsigned int nb, const char format);
int		ft_puthex(unsigned int num, const char format);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif
