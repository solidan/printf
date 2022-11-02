/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:41 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/15 10:42:02 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == 0 || f == 0)
		return ;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}

/*void    ft_change(unsigned int i, char *str)
{
        *str = *str + i;
}
 
int main(void)
{
    char    string[] = "Holaaaagurrrr";
    printf("string sin modificar = %s\n", string);
    ft_striteri(string, ft_change);
    printf("string modificada = %s\n", string);
    return(0);
}*/
