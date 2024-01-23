#include "libft.h"
/*
The memcpy() function copies n bytes from memory 
area src to memory area dest. The memory areas must not overlap

The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	dest2 = dest;
	src2 = src;
	while (n--)
		*dest2++ = *src2++;
	dest = dest2;
	return (dest);
	
}
/* int	main()
{
	char src[50] = "Gustavo Daniel";
	char dest[50];
	
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
 */