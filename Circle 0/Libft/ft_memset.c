#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len):
{
	size_t	i;
	char	*str;

	i = 0;
	str = b;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

*/int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.
	memset(str + 13, '.', 8*sizeof(char));
  	printf("After memset():  %s", str);
	return 0;
}
/*

