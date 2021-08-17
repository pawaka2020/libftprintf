#include "libftprintf.h"

// int		check_error_in_base(char *base)
// {
// 	char	*checkbase;
// 	int		i_check;

// 	checkbase = base;
// 	if (*base == 0 || *(base + 1) == 0)
// 		return (0);
// 	while (*checkbase)
// 	{
// 		if (*checkbase == '+' || *checkbase == '-'
// 			|| *checkbase <= 31)
// 			return (0);
// 		i_check = 1;
// 		while (*(checkbase + i_check))
// 		{
// 			if (*(checkbase + i_check) == *checkbase)
// 				return (0);
// 			i_check++;
// 		}
// 		checkbase++;
// 	}
// 	return (1);
// }

static int	ft_strlen(char *str)
{
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	unsigned int baselen;
	int res;

	// if (check_error_in_base(base))
	// {

	//}
	baselen = ft_strlen(base);
	res = 0;
	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base);
		ft_putnbr_base(nbr % baselen, base);
	}
	else
	{
		res = write(1, base + nbr, 1);
	}
	return (res);
}

void ft_printptr(void *ptr, int *strlen)
{
	*strlen += write(1, "0x", 2) + ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
}