#include "ft_printf.h"

void	ft_printchar(int i, int *strlen)
{
	*strlen += ft_putchar(i);
}