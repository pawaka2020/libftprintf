#include "libftprintf.h"

void ft_printbighexa(long i, int *strlen)
{
	if(i < 0) 
	{ 
		ft_printstr("FFFFFFFF", strlen); 
	}
	ft_putnbr_base(i, "0123456789ABCDEF", strlen);
}