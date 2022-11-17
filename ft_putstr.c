/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:49:09 by mbachar           #+#    #+#             */
/*   Updated: 2022/11/17 13:56:24 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!*s)
		return (write(1, "(null)", 6));
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
		len++;
	}
	return (len);
}
