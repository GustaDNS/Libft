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
/* int	main()
{
	char str1[15] = "Gustavo";
	char str2[15] = "Gustavo";
	int ret;

	ret = ft_strncmp(str1, str2, 5);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return(0);
} */