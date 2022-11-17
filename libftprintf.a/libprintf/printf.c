/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:24:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/17 09:57:06 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert(va_list ptr, char const *s, int *len){
if (*s == 'x')
		ft_print_hexa(va_arg(ptr, int), "0123456789abcdef", len);
	else if (*s == 'X')
		ft_print_hexa(va_arg(ptr, int), "0123456789ABCDEF", len);
}

int	ft_printf(char const *s, ...)
{
	va_list	ptr;
	int		i;
	int		len;
	
	i = 0;
	len = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_convert(ptr, &s[i + 1], &len);
			i++;
		}
		else
		len += write(1, &s[i]);
		i++;
	} 
	va_end(ptr);
	return(len);
}

