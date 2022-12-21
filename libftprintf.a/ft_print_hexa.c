/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/21 13:06:25 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

size_t	ft_len_hex(unsigned int n)
{
	size_t	length;

	length = 1;
	while (n > 15)
	{
		n /= 16;
		length++;
	}
	return (length);
}

size_t	ft_hex(unsigned int n)
{
	size_t	length;
	char	*hexa;

	hexa = "0123456789abcdef";
	length = 0;
	length += ft_len_hex(n);
	if (n > 15)
		ft_hex(n / 16);
	ft_putchar(hexa[n % 16]);
	return (length);
}

size_t	ft_hex_may(unsigned int n)
{
	size_t	length;
	char	*hexa_m;

	hexa_m = "0123456789ABCDEF";
	length = 0;
	length += ft_len_hex(n);
	if (n > 15)
		ft_hex_may(n / 16);
	ft_putchar(hexa_m[n % 16]);
	return (length);
}


size_t	ft_len_base(unsigned int n)
{
	size_t	length;

	length = 1;
	while (n > 9)
	{
		n /= 10;
		length++;
	}
	return (length);
}

size_t	ft_num_base(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 2147483648)
		return (ft_putstr("2147483648"));
	else if (nb < 0)
	{
		i = ft_putchar ('-');
		i += 	ft_num_base (-nb);
	}
	if (nb > 9)
	{
		i += ft_num_base (nb / 10);
		i += ft_num_base (nb % 10);
	}
	else if (nb >= 0)
		i += ft_putchar (nb + 48);
	return (i);
}

