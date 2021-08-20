#include "libftprintf.h"

// static int ft_abs(int i)
// {
// 	if (i < 0)
// 		return (i * -1);
// 	return (i);
// }

//unsigned integer, not int
//unsigned int bigger max value than int
void ft_printunsint(long i, int *strlen)
{
	if (i > 0)
		ft_printint(i, strlen);
	else
		ft_printint(0, strlen);
}