#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

# include <stdarg.h>
# include <stddef.h>

int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_pointer(unsigned long ptr, int base);
int		ft_print_hex(unsigned int n, int base);
int		ft_check_type(const char *input, void *arg);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);

#endif
