#include "libftprintf.h"

void	ft_printspec2(char c, va_list arg, int *strlen)
{
	if (c == 'd' || c == 'i')
		ft_printint(va_arg(arg, int), strlen);
	else if (c == 'u')
		ft_printunsint(va_arg(arg, unsigned int), strlen);
	else if (c == 'x')
		ft_printhexa(va_arg(arg, long), strlen);
	else if (c == 'X')
		ft_printbighexa(va_arg(arg, long), strlen);
}
