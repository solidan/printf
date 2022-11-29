/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:17:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/29 13:25:59 by acuesta-         ###   ########.fr       */
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


int		ft_printf(char const *str, ...);
void	ft_putchar(char c);
int		ft_putstrt(char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int nb, int *len);
void	ft_num_base(unsigned int nb, int *len);
int		ft_porcent(void);

#endif