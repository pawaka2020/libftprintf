#include "ft_printf.h"

void	ft_printspec(char c, va_list arg, int *strlen)
{
	if (c == 'c')
		ft_printchar(va_arg(arg, int), strlen);
	else if (c == 's')
		ft_printstr(va_arg(arg, char *), strlen);
	else if (c == 'p')
		ft_printptr(va_arg(arg, void *), strlen);
	else if (c == '%')
		ft_printchar('%', strlen);
	else if (c == 'd' || c == 'i')
		ft_printint(va_arg(arg, int), strlen);
	else if (c == 'u')
		ft_printunsint(va_arg(arg, unsigned int), strlen);
	else if (c == 'x')
		ft_printhexa(va_arg(arg, long), strlen);
	else if (c == 'X')
		ft_printbighexa(va_arg(arg, long), strlen);
}
