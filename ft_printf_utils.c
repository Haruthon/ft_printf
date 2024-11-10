#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
void	ft_putnbr(int n)
{
	long int long_n;

	long_n = (long int)n;
	if (long_n < 0)
	{
		ft_putchar('-');
		long_n = -long_n;
	}
	if (long_n >= 10)
		ft_putnbr(long_n / 10);
	ft_putchar(long_n % 10 + '0');
}
void	ft_puthex(unsigned int n)
{
	if (n >= 16)
		ft_puthex(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
}

void	handle_char(va_list args)
{
	ft_putchar(va_arg(args, int));
}
void	handle_string(va_list args)
{
	ft_putstr(va_arg(args, char *));
}
void	handle_integer(va_list args)
{
	ft_putnbr(va_arg(args, int));
}
void	handle_hex(va_list args)
{
	ft_puthex(va_arg(args, unsigned int));
}

typedef void (*t_handler)(va_list);

t_handler	get_handler(char specifier)
{
	if (specifier == 'c')
		return handle_char;
	if (specifier == 's')
		return handle_string;
	if (specifier == 'd' || specifier == 'i')
		return handle_integer;
	if (specifier == 'x')
		return handle_hex;
	return NULL;
}