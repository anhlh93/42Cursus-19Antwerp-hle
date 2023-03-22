#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "stdarg.h"
# include "unistd.h"
# include "stdlib.h"

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_len_ptr(uintptr_t nb);
int	ft_putptr(uintptr_t ptr);
int	ft_print_ptr(uintptr_t nb);
int	ft_len(int n);
int	ft_put_uint(unsigned int nb);
char	*ft_itoa(int n);

#endif
