#include "ft_printf.h"

int	ft_puthexmaj(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_puthexmaj(n / 16);  //le chiffre est plus grand que 16 alors on divise on print une premiere fois en faisant le modulo juste en dessous puis comme on le voit dans cette ligne on rapelle la fonction pour faire le deuxieme truc de hexadecimal (1B). 
		if (n % 16 < 10)
			i = i + ft_putchar(n % 16 + '0');  //le 0 c'est pour commencer au caractère (chiffre) 0 de ascii et cette partie est pour tout ce qui est chiffre
		else
			i = i + ft_putchar(n % 16 + 55);  //la le 55 c'est pour tout ce qui est lettre  
	}
	else
	{
		if (n % 16 < 10)
			i = i + ft_putchar(n % 16 + '0');
		else
			i = i + ft_putchar(n % 16 + 55);
	}
	return (i);
}

int	ft_puthexmin(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_puthexmin(n / 16);
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

int	ft_puthex(unsigned int n, int maj)
{
	if (maj == 0)
		return (ft_puthexmin(n));
	else
		return (ft_puthexmaj(n));
}