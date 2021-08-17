#include "libftprintf.h"

static void	ft_putnbr(int n)
{
	if(n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

static int	ft_nbrlen(int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

void ft_printint(int i, int *strlen)
{
	if(i < 0) 
	{ 
		i = -i;
		// ft_putchar('-');
		// *strlen += 1;
		*strlen += ft_putchar('-'); 
	}
	*strlen += ft_nbrlen(i);
	ft_putnbr(i); 
}