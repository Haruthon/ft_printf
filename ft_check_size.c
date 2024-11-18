/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:55:58 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/18 17:57:52 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_size(unsigned long long int n)
{
	int size;

	size = 1;
	while (n > 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}