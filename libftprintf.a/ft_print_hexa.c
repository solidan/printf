/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/30 12:58:30 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>


int	ft_hexa(unsigned long int n, char c)
{
	int	long_n;

	long_n = 1;
	if (c == 'p' || c == 'x')
	{
		if (n >= 16)
			long_n = long_n + ft_hexa(n / 16, c);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (c == 'X')
	{
		if (n >= 16)
			long_n = long_n + ft_hexa(n / 16, c);
		ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (long_n);
}
