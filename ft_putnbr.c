/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:34:58 by mbachar           #+#    #+#             */
/*   Updated: 2022/11/17 15:07:26 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	number_len(int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = number_len(n);
	if (n < 0)
	{
		len += ft_putchar('-');
		n = n * (-1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (len);
}
int main()
{
	printf("\nUser-made : %d\n", ft_putnbr(-5353));
	printf("\nPre-made  : %d\n", printf("%d", -5353));
}