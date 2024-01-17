#include "libft.h"

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c -= 32;
	return(c);
}
/* int main()
{    
    printf("%d\n", ft_toupper('a'));
    printf("%d\n", ft_toupper('a'));
    return (0);
} */