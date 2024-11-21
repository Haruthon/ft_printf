/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:38:24 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/20 14:39:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	check_size(int n)
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

int	ft_treat_d_i(int n)
{
	int size;
	char *result;

	size = check_size(n);
	result = ft_itoa(n);
	ft_putstr_fd(result, 1);
	return (size);
}

// #include <stdio.h>

// int main()
// {
// 	int n = -2147483648;
// 	printf("%d\n", ft_treat_d_i(n));
// }