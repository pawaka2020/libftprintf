#include "libftprintf.h"

void ft_printstr(char *str, int *strlen)
{
	while (*str)
	{
		ft_putchar(*str);
		*strlen += 1;
		str++;
	}
}