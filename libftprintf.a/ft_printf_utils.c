/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:55 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/28 11:46:57 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int		ft_putstr(char *str)
{
	int	len;

	i = 0;
if (!str)
{
	write (1, "(null)", 6)
	return(6);
}
len = ft_strlen(str);
write(1, str, len);
return(len);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)(n);
	if (nb > 9)
		ft_putnbr_fd (nb / 10, fd);
	ft_putchar_fd ((char)(nb % 10 + '0'), fd);
}

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", len);
	else if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nb, len);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else if (nb >= 0)
		ft_putchar(nb + 48, len);
}

void	ft_putu(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else if (nb >= 0)
		ft_putchar(nb + 48, len);
}

int	ft_porcent(void)
{
	write (1, "%", 1);
	return (1);
}


// int	main(void)
//{
//   ft_putnbr_fd(123, 1);
//}
 
// int	main(int argc, char **argv)
//{
//  (void)argc;
//  ft_putstrt(argv[0]);
//  ft_putstrt("\n");
//  return (0);
// }


//ESTO ES OTRA FUNCION
// int	ft_printstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (str == NULL)
// 	{
// 		ft_putstrt("null");
// 		return (6);
// 	}
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 			i++;
// 	}
// 	return (i);
// }