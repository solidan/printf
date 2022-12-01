/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/01 12:35:54 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>




size_t  ft_len_hex(unsigned int n)
{
    size_t  length;
    length = 1;
    while (n > 15)
    {
        n /= 16;
        length++;
    }
    return (length);
}
size_t  ft_printf_hex(unsigned int n)
{
    size_t  length;
    length = 0;
    length += ft_len_hex(n);
    if (n > 15)
        ft_printf_hex(n / 16);
    ft_putchar(HEXA[n % 16]);
    return (length);
}
size_t  ft_printf_hex_may(unsigned int n)
{
    size_t  length;
    length = 0;
    length += ft_len_hex(n);
    if (n > 15)
        ft_printf_hex_may(n / 16);
    ft_putchar(HEXA_M[n % 16]);
    return (length);
}




void	ft_num_base(unsigned int n)
{
    size_t  length;
    length = 0;
    length += ft_num_base(n);
    if (n > 9)
    length += ft_num_base(n / 10);
    length +=  ft_num_base(n % 10);
    return (n);

	else 
	{
		length += ft_num_base(n + '0');
		
	}
	return(length);
}




void	ft_putptr(unsigned long long int ptr, int *len)
{
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
		ft_putnbr_base_ptr(ptr, "0123456789abcdef", len);
}



