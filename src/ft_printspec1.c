#include "libftprintf.h"

void	ft_printspec1(char c, va_list arg, int *strlen)
{
	if (c == 'c')
		ft_printchar(va_arg(arg, int), strlen);
	else if (c == 's')
		ft_printstr(va_arg(arg, char *), strlen);
	else if (c == 'p')
		ft_printptr(va_arg(arg, void *), strlen);
	else if (c == '%')
		ft_printchar('%', strlen);
}
