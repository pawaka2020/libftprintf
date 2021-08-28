#include "ft_printf.h"

void	ft_printstr(char *str, int *strlen)
{
	if (str == 0)
		str = "(null)";
	while (*str)
	{
		*strlen += ft_putchar(*str);
		str++;
	}
}
