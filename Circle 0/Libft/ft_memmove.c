//#include "libft.h"
#include <string.h>
#include <stdio.h>
/*
void	*ft_memove(void *dst, const void *src, size_t len)
{

}
*/
int	main ()
{
  char	str1[50] = "Geeks"; 
  char	str2[50] = "Quiz"; 
 
  puts("str1 before memmove ");
  puts(str1);
 
  // Copies contents of str2 to str1
  memmove (str1, str2, 4);
 
  puts("\nstr1 after memmove ");
  puts(str1);
 
  return 0;
}
