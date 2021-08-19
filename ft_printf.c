/*
return value is total chars of output.
*/
//
#include "libftprintf.h"

int ft_printf(const char *str, ...) 
{ 
	int	strlen;
	va_list arg; 

	strlen = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str != '%')
			ft_printchar(*str, &strlen);
		else
		{
			if (*(str + 1) == 'c')
				ft_printchar(va_arg(arg, int), &strlen);
			else if (*(str + 1) == 'd' || *(str + 1) == 'i')
				ft_printint(va_arg(arg, int), &strlen);
			else if (*(str + 1) == 's')
				ft_printstr(va_arg(arg, char *), &strlen);
			else if (*(str + 1) == 'p')
				ft_printptr(va_arg(arg, void *), &strlen);
			else if (*(str + 1) == '%')
				ft_printchar('%', &strlen);
			else if (*(str + 1) == 'u')
				ft_printunsint(va_arg(arg, unsigned int), &strlen);
			else if (*(str + 1) == 'x')
				ft_printhexa(va_arg(arg, long), &strlen);
			else if (*(str + 1) == 'X')
				ft_printbighexa(va_arg(arg, long), &strlen);
			str++;
		}
		str++;
	}
	va_end(arg);
	return (strlen);
} 
