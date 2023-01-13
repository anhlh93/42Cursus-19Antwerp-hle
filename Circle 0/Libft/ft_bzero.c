//#include "libft.h"
#include "stdio.h"
#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	//cannot work with *s directly
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);
  
	ft_bzero(str, 0);
  	printf("After bzero():  %s", str);
	return 0;
}
*/
