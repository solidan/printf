/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:44:27 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/07 12:18:05 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

// utils
int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nb);

// hexa
size_t	ft_printf_hex(unsigned int n);
size_t	ft_len_hex(unsigned int n);
size_t	ft_printf_hex_may(unsigned int n);
size_t	ft_num_base(unsigned int nb);
void	ft_putptr(unsigned long long int ptr, int *len);

#endif