#include "ft_printf_utils.h"

int	main(void)
{
	int				a;
	char			*str;
	unsigned int	u;
	void			*ptr;

	a = 42;
	str = "Hello, World!";
	u = 123456;
	ptr = str;
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", str);
	ft_printf("Integer: %d\n", a);
	ft_printf("Unsigned Integer: %u\n", u);
	ft_printf("Hexadecimal (lowercase): %x\n", u);
	ft_printf("Hexadecimal (uppercase): %X\n", u);
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("Percent sign: %%\n");
	return (0);
}
