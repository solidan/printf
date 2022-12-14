/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/14 13:59:11 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_convert(va_list ptr, const char *str)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i += ft_putchar(va_arg(ptr, int));
	else if (*str == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (*str == 'p')
		i += ft_printf_hex(va_arg(ptr, unsigned long int));
	else if (*str == 'd')
		i += ft_putnbr(va_arg(ptr, int));
	else if (*str == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	else if (*str == 'u')
		i += ft_num_base(va_arg(ptr, unsigned int));
	else if (*str == 'x')
		i += ft_printf_hex(va_arg(ptr, unsigned int));
	else if (*str == 'X')
		i += ft_printf_hex_may(va_arg(ptr, int));
	else if (*str == '%')
		i += write(1, "%", 1);
	return (i);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		len;
	int		i;
	

	i = 0;
 	len = 0;
 	va_start(ptr, str);
 	while (str[i])//!110
 	{/*
 		if (str[i] == '%')
 		{
 			len += ft_convert(ptr, str + i + 1); //!el numero de caracteres que imprime
 			i += 2;
 		}
 		else
 		{
 			len += write(1, str + i, 1);
 			i++;
 		}
*/
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
