#include "ft_printf.h"

void	ft_printhexa(unsigned int i, int *strlen)
{
	if (i >= 4294967295)
		ft_printstr("ffffffff", strlen);
	else
		ft_putnbr_base(i, "0123456789abcdef", strlen);
}