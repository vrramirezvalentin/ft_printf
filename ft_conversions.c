#include "ft_printf.h"
int ft_conversions(va_list ap, char c)
{
	if(c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if(c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if(c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if(c == 'u')
		return (ft_putunsigned(va_arg(ap, unsigned int)));
	if(c == 'x')
		return (ft_puthex(va_arg(ap, unsigned int), 0)); // le 0 est la pour indiquer que ce sera du hexa minuscule et inversement pour le 1
	if(c == 'X')
		return (ft_puthex(va_arg(ap, unsigned int), 1));
	if(c == 'p')
		return (ft_putptr(va_arg(ap, unsigned long long)));
	if(c == '%')
		return (ft_putchar('%'));	
	return 0;
}