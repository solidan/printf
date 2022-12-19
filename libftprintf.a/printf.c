/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/19 13:29:23 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_convert(va_list ptr, const char *str)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	if (*str == 'p')
		return (ft_putstr("0x") + ft_printf_hex(va_arg(ptr, unsigned long int)));
	if (*str == 'd')
		return (ft_putnbr (va_arg(ptr, int)));  //!cambiar
	if (*str == 'i')
		return (ft_putnbr(va_arg(ptr, int)));  //!cambiar
	if (*str == 'u')
		return (ft_num_base(va_arg(ptr, unsigned int)));
	if (*str == 'x')
		return (ft_printf_hex(va_arg(ptr, unsigned int)));
	if (*str == 'X')
		return (ft_printf_hex_may(va_arg(ptr, int)));
	if (*str == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start (ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_convert(ptr, str + i + 1);
			i += 2;
		}
		else
		{
			len += write(1, str + i, 1);
			i++;
		}
	}
	va_end(ptr);
	return (len);
}

// str = "Hola";
// i= 0;
// while(str[i])
// {
// 	print(&str[i]);
// 	i++;
// }

// &//sube referencia
// *[]//baja desreferencia

// char ** str = 4321

// char *  str = 1234 -> 1235

// char [h][a]['\0']

