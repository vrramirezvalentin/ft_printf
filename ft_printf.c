#include "ft_printf.h"
#include <stdio.h>
int	ft_printf(const char *format, ...)
{
	va_list(ap);
	int count;
	count = 0;

	va_start(ap, format);

	if(!format)
		return 0;
	if(format[0] == '%' && !format[1])
		return -1;

	while(*format != '\0')
	{
		if(*format == '%')
		{
			count += ft_conversions(ap, *(++format));
		}
		else
		{
			count += write(1, format, 1);
		}
		++format;
	}
	va_end(ap);
	return count;
}


// #include <stdio.h>

// int main (void)
// {
// 	int count;
// 	count = 0;
// 	int num = 42;
// 	void *ptr = &num;

// 	count = ft_printf("salut 8 %s salut", "test"); //validé
// 	ft_printf("char : %d \n", count);

// 	count = ft_printf("mon charactere est : %c \n", 'a'); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%d\n", 15); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%i \n", 15); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%u \n", 42); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%x \n", 27); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%X \n", 27); //validé
// 	printf("char : %d\n", count);

// 	count = ft_printf("%p \n", ptr); //validé
// 	printf("char : %d\n", count);


// 	printf("\n\n\n//////////////VRAI PRINTF//////////////\n");

// 	count = printf("salut 8 %s salut", "test"); //validé
// 	printf("char : %d \n", count);

// 	count = printf("mon charactere est : %c \n", 'a'); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%d\n", 15); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%i \n", 15); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%u \n", 42); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%x \n", 27); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%X \n", 27); //validé
// 	printf("char : %d\n", count);

// 	count = printf("%p \n", ptr); //validé
// 	printf("char : %d\n", count);


// 	return (0);
// }