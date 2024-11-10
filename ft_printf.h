#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int n);
void	ft_puthex(unsigned int n);
void	handle_char(va_list args);
void	handle_string(va_list args);
void	handle_integer(va_list args);
void	handle_hex(va_list args);
typedef void (*t_handler)(va_list);
t_handler	get_handler(char specifier);
int     ft_printf(const char *format, ...);

#endif
