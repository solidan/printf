/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/29 12:25:49 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

void ft_convert(va_list ptr, char const *str, int *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(ptr, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (*str == 'p')
		ft_putptr(va_arg(ptr, unsigned long long int), len);
	else if (*str == 'd')
		ft_putnbr(va_arg(ptr, int), len);
	else if (*str == 'i')
		ft_putnbr(va_arg(ptr, int), len);
	else if (*str == 'u')
		ft_num_base(va_arg(ptr, unsigned int), len);
	else if (*str == 'x')
		ft_putnbr_hexa(va_arg(ptr, int), "0123456789abcdef", len);
	else if (*str == 'X')
		ft_putnbr_hexa(va_arg(ptr, int), "0123456789ABCDEF", len);
	else if (*str == '%')
		*len += write(1, "%%", 1);
}

int		ft_printf(char const *str, ...)
{
	va_list ptr;
	int len;

	len = 0;
	va_start(ptr, str); // En este bucle, la idea es recorrer toda la cadena contenida en format hasta el final, que en este caso seria un '\0'
	while (*str)
	{
		if (*str == '%')
		{
			len = ft_convert(ptr, *str, len); // Comprueba si la cadena tiene un % en ella. Si lo hace, llamará a la función ft_convert.
			str++;
		}
		else
		{
			len += ft_putchar_fd(*str); //Si no se encuentra, el carácter se imprimirá y se agregará a "len", que es cuántos caracteres se imprimieron.
		}
		va_end(ptr);
		return (len);
	}
}
