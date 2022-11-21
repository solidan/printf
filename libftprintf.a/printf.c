/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/21 13:26:33 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert(va_list ptr, char const *s, int *len)
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


int	ft_printf(char const *s, ...)
{
	va_list ptr;
	int		i;
	int		len;
	

}
