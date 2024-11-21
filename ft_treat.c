/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:26:12 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/20 14:40:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat(int c, va_list args)
{
	int n;

	n = 0;
	if (c == 'c')
		n = ft_treat_c(va_arg(args, int));
	else if (c == 's')
		n = ft_treat_s(va_arg(args, char *));
	else if (c == 'p')
		n = ft_treat_p(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		n = ft_treat_d_i(va_arg(args, int));
	else if (c == 'u')
		n = ft_treat_u(va_arg(args, unsigned int));
	else if (c == 'x')
		n = ft_treat_x(va_arg(args, unsigned int));
	else if (c == 'X')
		n = ft_treat_X(va_arg(args, unsigned int));
	else if (c == '%')
		n = ft_treat_percent('%');
	return (n);
}