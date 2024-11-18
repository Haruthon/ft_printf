/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:38:24 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/18 18:09:52 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_d_i(int n)
{
	int size;
	char *result;

	size = check_size(n);
	result = ft_itoa(n);
	ft_putstr_fd(result, 1);
	return (size);
}