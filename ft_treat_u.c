/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:54:40 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/20 14:33:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include "./libft/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	check_size(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

int	ft_treat_u(unsigned int n)
{
	int	size;

	size = check_size(n);
	ft_putunbr_fd(n, 1);
	return (size);
}
#include <stdio.h>

// int	main(void)
// {
// 	unsigned int n = 0;
// 	printf("%d\n", ft_treat_u(n));
// }