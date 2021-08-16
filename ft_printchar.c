#include "libftprintf.h"

void ft_printchar(int i, int *strlen)
{
	*strlen += 1;
	ft_putchar(i);
}