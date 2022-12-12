/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:55 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/12 13:42:43 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>


int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putchar_fd(char c)
{
	write (1, &c, 1);
	return(1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str, 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)//no contadora  1
{
	int i;
	
	i = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (nb < 0)
	{
		i = ft_putchar('-');
		i += ft_putnbr(-nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0)
		ft_putchar(nb + 48);
	return(i);
}
/* void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)(n);
	if (nb > 9)
		ft_putnbr_fd (nb / 10, fd);
	ft_putchar ((char)(nb % 10 + '0'));
} */

//  void	ft_num_base(unsigned int nb, int *len)
//  {
//  	if (nb >= 10)
//  	{
//  		ft_putnbr(nb / 10, len);
//  		ft_putnbr(nb % 10, len);
//  	}
//  	else if (nb >= 0)
//  		ft_putchar(nb + 48, len);
//  }

// void	ft_putptr(unsigned long long int ptr, int *len)
// {
// 	len += write(1, "0x", 2);
// 	if (ptr == 0)
// 		len += write(1, "0", 1);
// 	else
// 		ft_putnbr_base_ptr(ptr, "0123456789abcdef", len);
// }

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