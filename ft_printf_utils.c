#include "ft_printf_utils.h"
#include <unistd.h>

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
		count += ft_print_char(str[count]);
	return (count);
}

int	ft_print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_print_char('-');
		count += ft_print_char('2');
		n = 147483648;
	}
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_print_int(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}

int	ft_print_pointer(unsigned long ptr, int base)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (ptr >= (unsigned long)base)
		count += ft_print_pointer(ptr / base, base);
	count += ft_print_char(hex_digits[ptr % base]);
	return (count);
}

int	ft_print_hex(unsigned int n, int base)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = base == 87 ? "0123456789abcdef" : "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, base);
	count += ft_print_char(hex_digits[n % 16]);
	return (count);
}

int	ft_check_type(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_print_char(*(char *)arg); // 修正: ポインタを文字にキャスト
	else if (*input == 's')
		i += ft_print_string((char *)arg);
	else if (*input == 'p')
		i += ft_print_pointer((unsigned long)arg, 16);
			// 修正: ポインタを unsigned long として処理
	else if (*input == 'd' || *input == 'i')
		i += ft_print_int(*(int *)arg); // 修正: ポインタを整数にキャスト
	else if (*input == 'u')
		i += ft_print_unsigned(*(unsigned int *)arg);
			// 修正: ポインタを unsigned int にキャスト
	else if (*input == 'x')
		i += ft_print_hex(*(unsigned int *)arg, 87);
			// 修正: ポインタを unsigned int にキャスト
	else if (*input == 'X')
		i += ft_print_hex(*(unsigned int *)arg, 55);
			// 修正: ポインタを unsigned int にキャスト
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
