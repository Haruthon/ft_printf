#include "ft_printf_utils.h"
#include <stdarg.h>

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (*input == '%')
				i += ft_print_char('%');
			else if (ft_strchr("cspdiuxX", *input))
				i += ft_check_type(input, va_arg(args, void *));
		}
		else
		{
			i += ft_print_char(*input);
		}
		input++;
	}
	va_end(args);
	return (i);
}
