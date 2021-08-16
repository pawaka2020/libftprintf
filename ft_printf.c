/*
return value is total chars of output.
*/
#include "libftprintf.h"

int ft_printf(const char *str, ...) 
{ 
	int	strlen;
	va_list arg; 

	strlen = 0;
	va_start(arg, str);
	//char *traverse = str;
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
	// int i = printf("Hello%d\n", -999);
	// printf("%d\n", i);
	int i = ft_printf("abcde%s%d\n", "Hello", 123);
	printf("%d\n", i);
}