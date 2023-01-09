
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		a = 147483648;
	}
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
		ft_putnbr(a);
	}
	else if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + 48);
}
