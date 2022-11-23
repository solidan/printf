/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:17:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/23 12:31:21 by acuesta-         ###   ########.fr       */
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
# include "libft/libft.h"


int		ft_printf(char const *s, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstrt(char *str);
int		ft_printstr(char *str);
size_t  ft_strlen(const char *s);
void	ft_putptr(unsigned long long int ptr, int *len);
void	ft_putnbr_fd(int n, int fd);
void	ft_putu(unsigned int nb, int *len);
void	ft_putnbr_base(unsigned int nbr, char *base, int *len);
void	ft_putnbr_base_ptr(uintptr_t nbr, char *base, int *len);


#endif