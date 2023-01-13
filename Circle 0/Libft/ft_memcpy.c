// #include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *sc, size_t n)
{
	char	*str1;
	const char	*str2;
	size_t	i;

	i = 0;
	str1 = dst;
	str2 = sc;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
/*
int	main ()
{
  char	str1[50] = "Greeks"; 
  char	str2[50] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  // Copies contents of str2 to str1
  ft_memcpy (str1, str2, 1);
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}
*/
