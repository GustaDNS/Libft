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
	return (dest);
	
}
/* int	main()
{
	char str[50] = "Gustavo This is memset";
	puts(str);
	ft_bzero(str, 7);
	puts(str);
	return(0);
} */