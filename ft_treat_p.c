#include "ft_printf.h"

static int ft_putchar(char c)
{
    if(write(1, &c, 1) < 0)
        return -1;
    return 1;
}

static int ft_putnbr_hex(unsigned long n)
{
    int len ;
    char *hex_digit = "0123456789abcdef";

    len = 0;
    if(n >= 16)
        len += ft_putnbr_hex(n / 16);
    if(ft_putchar(hex_digit[n % 16]) < 0)
        return -1;
    len++;

    return len;
}
int ft_treat_p(void *src)
{
    unsigned long address;
    int len;

    address = (unsigned long)src;
    len = 0;
    if (write(1, "0x", 2) != 2)
        return -1;
    len += 2;

    if (address == 0)
    {
        if (ft_putchar('0') < 0)
            return -1;
        len++;
    }
    else
    {
        int hex_len = ft_putnbr_hex(address);
        if (hex_len < 0)
            return -1;
        len += hex_len;
    }

    return len;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Custom: ");
    fflush(stdout);
    printf("\n%d\n", ft_treat_p((void *)&n));
    fflush(stdout);
    printf("Standard: ");
    fflush(stdout);
    printf("%d\n", printf("%p\n", &n));
}