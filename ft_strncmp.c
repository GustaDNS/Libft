#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*int	main ()
{
	char s1 [] = "Boas familia";
	char s2 [] = "asdefasd";
	
	printf("%d", ft_strncmp (s1, s2, 8));
	return (0);	
}*/