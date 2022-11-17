/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/17 13:41:06 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}



int	ft_hexa(unsigned long int n, char c, int fd)
{
	int	long_n;

	long_n = 1;
	if (c == 'p' || c == 'x')
	{
		if (n >= 16)
			long_n = long_n + ft_hexa(n / 16, c, fd);
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	}
	else if (c == 'X')
	{
		if (n >= 16)
			long_n = long_n + ft_hexa(n / 16, c, fd);
		ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	}
	return (long_n);
}
