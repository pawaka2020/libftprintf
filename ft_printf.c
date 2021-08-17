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
			else if (*(str + 1) == 'd')
				ft_printint(va_arg(arg, int), &strlen);
			else if (*(str + 1) == 's')
				ft_printstr(va_arg(arg, char *), &strlen);
			else if (*(str + 1) == 'p')
				ft_printptr(va_arg(arg, void *), &strlen);
			str++;
		}
		str++;
	}
	va_end(arg);
	return (strlen);
} 

#include <stdio.h>
int	main()
{
	char *x = "Hello";
  int y = 5;
	int x2 = ft_printf("%p\n", &x);
	int y2 = ft_printf("%p\n", &y);
	ft_printf("x2 = %d\n", x2);
	ft_printf("y2 = %d\n", y2);
	int x3 = printf("%p\n", &x);
	int y3 = printf("%p\n", &y);
	ft_printf("x3 = %d\n", x3);
	ft_printf("y3 = %d\n", y3);
}