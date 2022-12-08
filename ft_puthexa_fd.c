/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:01:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/08 13:19:21 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_puthexa_fd(int n)
{
char hex;
hex = "0123456789abcdef";
if (n >= 16){
	ft_puthexa_fd(n / 16);
	ft_putchar(hexa(n % 16));

return (0);
}

}

ft_putchar(char c){
	write(1, &c, 1);
	return(1);
}


ft_strlen(char str)
{
	int *i;
	 i = 0;
	 while (str[i] != '\0')
	 i++;
return(i);
}