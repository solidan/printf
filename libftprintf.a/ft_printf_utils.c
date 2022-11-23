/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:55 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/23 12:36:54 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstrt(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
}

int	ft_porcent(void)
{
	write (1, "%", 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstrt("null");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
			i++;
	}
	return (i);
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