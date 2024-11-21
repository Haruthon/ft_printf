#include "ft_printf.h"

int ft_treat_percent(void)
{
    write(1, "%%", 1);
    return 1;
}


// #include <stdio.h>

// int main()
// {
//     printf("%d", ft_treat_percent());
// }