#include "ft_printf.h"
int ft_putstr(char *str)
{
	int count;
	count = 0;

	if(str == NULL)
		str = "(null)";

	while(*str)
	{
		count += write(1, str, 1);
		++str;
	}
	return count;
}