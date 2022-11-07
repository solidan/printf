/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:47 by acuesta-          #+#    #+#             */
/*   Updated: 2022/11/07 12:19:27 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_hexa_len(unsigned	int num)
{
	int	len;
	len = 0;
	while(num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hexa(unsigned int num, const char format)
{
	if (num <= 16)
	{
		ft_put_hea(num /16, format);
		ft_put_hexa(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num -10 + 'a'), 1);
		else
		{
		if(format =='x')
			ft_putchar((num - 10 + 'a'), 1);
		if(format =='X')
			ft_putchar((num - 10 + 'A'), 1);
		}	
	}
}
int	ft_print_hexa(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
	ft_put_hexa(num, format);
	return(ft_hexa_len(num));
}