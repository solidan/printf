/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/14 10:53:23 by acuesta-         ###   ########.fr       */
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

size_t	ft_printf_hex(unsigned int n)
{
	size_t	length;
	char	*hexa;

	hexa = "0123456789abcdef";
	length = 0;
	length += ft_len_hex(n);
	if (n > 15)
		ft_printf_hex(n / 16);
	ft_putchar_fd(hexa[n % 16]);
	return (length);
}

size_t	ft_printf_hex_may(unsigned int n)
{
	size_t	length;
	char	*hexa_m;

	hexa_m = "0123456789ABCDEF";
	length = 0;
	length += ft_len_hex(n);
	if (n > 15)
		ft_printf_hex_may(n / 16);
	ft_putchar_fd(hexa_m[n % 16]);
	return (length);
}

size_t	ft_num_base(unsigned int n)
{
	size_t	length;

	length = 0;
	if (n > 9)
	{
		length += ft_num_base(n % 10);
		length /= 10;
	}
	else
		length += ft_putchar_fd(n + '0');
	return (length);
}
