#include "libft.h"

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/* int main()
{
    printf("%d\n", ft_tolower('A'));
    printf("%d\n", tolower('A'));
    return (0);
} */