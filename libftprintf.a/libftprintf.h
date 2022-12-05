/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:17:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/05 11:34:51 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

#define HEXA = "0123456789abcdef"
#define HEXA_may = "0123456789ABCDEF"

// utils
int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstrt(char *str);
void	ft_putnbr(int nb);

// hexa
size_t  ft_printf_hex(unsigned int n);
size_t  ft_len_hex(unsigned int n);
size_t  ft_printf_hex_may(unsigned int n);
size_t	ft_num_base(unsigned int nb);
void	ft_putptr(unsigned long long int ptr, int *len);

#endif