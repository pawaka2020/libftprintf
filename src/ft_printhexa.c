#include "libftprintf.h"

void	ft_printhexa(long i, int *strlen)
{
	if (i < 0)
	{
		ft_printstr("ffffffff", strlen);
	}
	ft_putnbr_base(i, "0123456789abcdef", strlen);
}
