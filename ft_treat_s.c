/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:33:08 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/20 14:45:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_s(char *src)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	while (i < len)
	{
		ft_putchar_fd(src[i], 1);
		i++;
	}
	return ((int)len);
}

// #include <stdio.h>

// int main()
// {
// 	char *str = "hello";

// 	printf("%d", ft_treat_s(str));
// }
