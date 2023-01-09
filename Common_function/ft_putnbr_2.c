
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	long	b;
	int		i;
	char	c[10];

	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	b = a;
	i = 0;
	while (b >= 10)
	{
		c[i] = b % 10 + '0';
		b = b / 10;
		i++;
	}
	c[i] = b + '0';
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
