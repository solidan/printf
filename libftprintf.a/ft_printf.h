/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:44:27 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/21 13:05:43 by acuesta-         ###   ########.fr       */
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
int		ft_putnbr(int nb);
int		ft_putchar_fd(char c);

// hexa
size_t	ft_hex(unsigned int n);
size_t	ft_len_hex(unsigned int n);
size_t	ft_len_base(unsigned int n);
size_t	ft_hex_may(unsigned int n);
size_t	ft_num_base(unsigned int nb);

#endif