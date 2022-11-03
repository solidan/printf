/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:55:55 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/03 11:16:20 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 2);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}


int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}


int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}



int main(int argc, const char *argv[])
{
	char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\n'};
	ft_putstr(str);
	return 0;
}
