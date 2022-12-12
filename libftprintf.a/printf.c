/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/12 12:24:07 by acuesta-         ###   ########.fr       */
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
		ft_printf_hex(va_arg(ptr, unsigned long int), len);
	else if (*str == 'd')
		ft_putnbr(va_arg(ptr, int));
	else if (*str == 'i')
		ft_putnbr(va_arg(ptr, int));
	else if (*str == 'u')
		ft_num_base(va_arg(ptr, unsigned int), len);
	else if (*str == 'x')
		ft_printf_hex(va_arg(ptr, unsigned int), len);
	else if (*str == 'X')
		ft_printf_hex_may(va_arg(ptr, int), len);
	else if (*str == '%')
		*len += write(1, "%", 1);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		len;
	int i;
	
	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_convert(ptr, &str[i + 1], &len);
			i++;
		}
		else
		{
			len += write(1, &str[i], 1);
			i++;
		}
		va_end(ptr);
	}
	return (len);
}
