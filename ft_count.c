/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:26:06 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/18 17:26:08 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_char(const char *input, va_list args)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			c += ft_treat(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			c++;
		}
		i++;
		if (save[i])
			return (c);
	}
	return (c);
}