#include "ft_printf.h"

static int	ft_puthexx(unsigned long long n)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_puthexx(n / 16);
		if (n % 16 < 10)
			i = i + ft_putchar(n % 16 + '0');
		else
			i = i + ft_putchar(n % 16 + 87);
	}
	else
	{
		if (n % 16 < 10)
			i = i + ft_putchar(n % 16 + '0');
		else
			i = i + ft_putchar(n % 16 + 87);
	}
	return (i);
}

int	ft_putptr(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (i + 5);  //pourqoi ?
	}
	i = i + ft_putstr("0x");
	i = i + ft_puthexx(n);
	return (i);
}
