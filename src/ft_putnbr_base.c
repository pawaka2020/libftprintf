#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nbr, char *base, int *res)
{
	unsigned int	baselen;

	baselen = ft_strlen(base);
	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base, res);
		ft_putnbr_base(nbr % baselen, base, res);
	}
	else
	{
		*res += 1;
		write(1, base + nbr, 1);
	}	
}
