#include "libftprintf.h"

int ft_printf(const char *str, ...) 
{ 
	int	strlen;
	va_list arg;
	char c;

	strlen = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str != '%')
			ft_printchar(*str, &strlen);
		else
		{
			c = *(str +1);
			if (ft_partof(c, "csp%"))
				ft_printspec1(c, arg, &strlen);
			else if (ft_partof(c, "diuxX"))
				ft_printspec2(c, arg, &strlen);
			str++;
		}
		str++;
	}
	va_end(arg);
	return (strlen);
} 

// #include <stdio.h>
// int	main()
// {
//     printf(" %-10d \n", 123);
//     printf(" %03d \n", 123);
//     printf(" %-#10x \n", 123);  
//     printf(" %#x \n", 123);
// }