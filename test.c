static int	ft_nbrlen(int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_nbrlen(2001010));
}