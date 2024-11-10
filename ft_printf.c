#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i = 0;
	t_handler	handler;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (handler = get_handler(format[i + 1])))
		{
			handler(args);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}
