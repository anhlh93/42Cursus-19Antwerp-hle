#include "libft.h"

int	ft_isalpha(int number)
{
	if ((number >= 65 && number <= 90)) || (number >= 97 && number <= 122)
		return (1);
	return (0);
}
