#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char 	s1[] = "Gustavo ";
// 	char 	s2[] = "Daniel";
// 	printf("%s", ft_strcat (s1, s2)); 
// }