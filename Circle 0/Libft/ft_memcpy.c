/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

/*
void	*ft_memcpy(void *dst, const void *sc, size_t n)
{
	
}
*/


int	main ()
{
  char	str1[] = "Geeks"; 
  char	str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  /* Copies contents of str2 to str1 */
  memcpy (str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}

