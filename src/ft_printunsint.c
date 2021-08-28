#include "ft_printf.h"

void	ft_printunsint(long i, int *strlen)
{
	if (i > 0)
		ft_printint(i, strlen);
	else
		ft_printint(0, strlen);
}
