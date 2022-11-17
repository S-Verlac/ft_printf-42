/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:26:56 by mbachar           #+#    #+#             */
/*   Updated: 2022/11/17 14:49:12 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	number_len_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != '\0')
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_put_unsigned_nbr(unsigned int n)
{
	if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	if (n > 9)
	{
		ft_put_unsigned_nbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	return (number_len_unsigned(n));
}
