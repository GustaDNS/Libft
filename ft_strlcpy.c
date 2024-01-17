#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;

	d = dest;
	s = src;
	n = size;
	while (n > 1 && *s)
	{
		*d++ = *s++;
		n--;
	}
	if (n > 0)
		*d = '\0';
	while (*s)
		s++;
	return (s - src);
}
/* int	main()
{
	char src[10]	= "ab";
	char dest[10]	= "123";

	size_t 			nb = 2;
	unsigned int 	nb2 = 2;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcpy(dest, src, nb));
	printf("Str: %lu", ft_strlcpy(dest, src, nb2));
	return (0);
} */