#include "libftprintf.h"

void ft_printptr(void *ptr, int *strlen)
{
	*strlen += write(1, "0x", 2);
	ft_putnbr_base((unsigned long)ptr, "0123456789abcdef", strlen);
}