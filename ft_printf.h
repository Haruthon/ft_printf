#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
#include <stdarg.h>
# include <unistd.h>

int	ft_treat_char(const char *input, va_list args);
int	ft_treat(int c, va_list args);


#endif
