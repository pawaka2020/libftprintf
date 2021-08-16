#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
//remember to remove <stdio.h> in the final version
# include <stdio.h>
//for using 'write' function
# include <unistd.h>
// for malloc and free
# include <stdlib.h>
//for using va_start, va_arg, va_copy, va_end
//ft_printf is a variadic function
# include<stdarg.h>
//
int 		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_printchar(int i, int *strlen);
void	ft_printint(int i, int *strlen);
void	ft_printstr(char *str, int *strlen);


#endif