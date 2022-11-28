/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/28 11:54:27 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_convert(va_list ptr, char const *s, int *len)
{
	if (*s == 'c')
		ft_putchar(va_arg(ptr, int), len);
	else if (*s == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (*s == 'p')
		ft_putptr(va_arg(ptr, unsigned long long int), len);
	else if (*s == 'd')
		ft_putnbr(va_arg(ptr, int), len);
	else if (*s == 'i')
		ft_putnbr(va_arg(ptr, int), len);
	else if (*s == 'u')
		ft_putu(va_arg(ptr, unsigned int), len);
	else if (*s == 'x')
		ft_putnbr_hexa(va_arg(ptr, int), "0123456789abcdef", len);
	else if (*s == 'X')
		ft_putnbr_hexa(va_arg(ptr, int), "0123456789ABCDEF", len);
	else if (*s == '%')
		*len += write(1, "%%", 1);
}

int ft_printf(char const *str, ...)
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
			len += ft_putchar_fd(*str); //Si no se encuentra, el carácter se imprimirá y se agregará a "ret", que es el control de cuántos caracteres se imprimieron.
		}
		va_end(ptr);
		return (len);
	}
}

