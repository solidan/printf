/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:17:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/10/25 11:25:32 by acuesta-         ###   ########.fr       */
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

int		ft_printf(char const *s, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char const *str, int *len);
int		ft_strlen(char *str);
void	ft_putptr(unsigned long long int ptr, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putu(unsigned int nb, int *len);
void	ft_putnbr_base(unsigned int nbr, char *base, int *len);
void	ft_putnbr_base_ptr(uintptr_t nbr, char *base, int *len);


#endif