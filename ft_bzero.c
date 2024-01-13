#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (s);
}
/* int	main()
{
	char str[50] = "Gustavo This is string.h library function";
	puts(str);
	ft_bzero(str, 7);
	puts(str);
	return(0);
} */