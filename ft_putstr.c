#include "libft.h"

void ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
/* int	main()
{
	ft_putstr("gustavo");
	return(0);
} */