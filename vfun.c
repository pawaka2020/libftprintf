/*
include stdarg to enable the use of
variadic functions.
Declare va_list pointer.
va_start pointer with variadic parameter.
access the parameter value with va_arg
remember to use va_end when finished.
*/
#include <stdarg.h>
#include <stdio.h>

int ft_sum(int n, ...)
{
    int sum;
		int	i;
    va_list ptr;

		sum = 0;
		i = -1;
    va_start(ptr, n);
		while (i++, i < n)
      sum += va_arg(ptr, int);
    va_end(ptr);
    return (sum);
}

int main()
{
    printf("\n\n Variadic functions: \n");
    printf("\n 1 + 2 = %d ",
           ft_sum(2, 1, 2));
    printf("\n 3 + 4 + 5 = %d ",
           ft_sum(3, 3, 4, 5));
    printf("\n 6 + 7 + 8 + 9 = %d ",
           ft_sum(4, 6, 7, 8, 9));
    printf("\n");
 
    return 0;
}