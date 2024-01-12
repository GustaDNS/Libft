#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if(n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if(n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		ft_putnbr(n);
	}
	else if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}			

}
/* int	main()
{
	ft_putnbr(-2147483648);
	return(0);
} */