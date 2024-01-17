#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++; // chegar ao fim da minha string
	while (s[i] != c && i >= 0)
		i--; //no fim, reduzir até encontrar o caractere igual
	if (s[i] == c)
		return ((char *)&s[i]); //retornar o endereço do caractere
	return (NULL);
}
/* int	main()
{
	char *s = "Gustavo";
	char c = 'u';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return(0);
} */