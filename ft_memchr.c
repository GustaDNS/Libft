#include "libft.h"
/*
The memchr() function scans the initial n bytes of the memory area pointed to by s 
for the first instance of c. Both c and the bytes of the memory area pointed to by s are 
interpreted as unsigned char.

The memchr() and memrchr() functions return a pointer to the matching byte or 
NULL if the character does not occur in the given memory area.
*/
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const unsigned char *str;
	
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/* int	main()
{
	char str[] = "Hello World";
	char *ptr;
	ptr = memchr(str, 'W', 7);
	printf("%s\n", ptr);
	ptr = ft_memchr(str, 'W', 7);
	printf("%s\n", ptr);
	return (0);
}
 */