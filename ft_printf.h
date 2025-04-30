#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int 	ft_putchar(int c);
int 	ft_conversions(va_list ap, char c);
int 	ft_putstr(char *str);
int 	ft_putnbr(int n);
int		ft_putunsigned(unsigned int n);
int		ft_puthexmaj(unsigned int n);
int		ft_puthexmin(unsigned int n);
int		ft_puthex(unsigned int n, int maj);
int		ft_putptr(unsigned long long n);


#endif