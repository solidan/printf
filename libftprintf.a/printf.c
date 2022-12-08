/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/08 10:48:18 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_convert(va_list ptr, const char *str, int *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(ptr, int));
	else if (*str == 's')
		ft_putstr(va_arg(ptr, char *));
	else if (*str == 'p')
		ft_putstr("0x") + ft_printf_hex(va_arg(ptr, unsigned long int), len);
	else if (*str == 'd')
		ft_putnbr(va_arg(ptr, int));
	else if (*str == 'i')
		ft_putnbr(va_arg(ptr, int));
	else if (*str == 'u')
		ft_num_base(va_arg(ptr, unsigned int));
	else if (*str == 'x')
		ft_printf_hex(va_arg(ptr, unsigned int));
	else if (*str == 'X')
		ft_printf_hex_may(va_arg(ptr, int));
	else if (*str == '%')
		*len += write(1, "%", 1);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_convert(ptr, str, &len);
			str++;
		}
		else
		{
			len += ft_putchar(*str);
		}
		va_end(ptr);
	}
	return (len);
}
