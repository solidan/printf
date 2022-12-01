/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:17:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/01 11:03:30 by acuesta-         ###   ########.fr       */
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
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int nb, int *len);

// hexa
int		ft_hexa(unsigned long int n, char c);
void	ft_num_base(unsigned int nb, int *len);
void	ft_putptr(unsigned long long int ptr, int *len);

#endif