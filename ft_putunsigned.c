#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 10)
	{
		i = i + ft_putunsigned(n / 10);
		i = i + ft_putchar(n % 10 + '0');
	}
	else
		i = i + ft_putchar(n + '0');
	return (i);
}