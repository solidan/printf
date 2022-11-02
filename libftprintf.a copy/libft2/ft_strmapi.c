/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:45 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/16 11:22:35 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char mi_funcion(unsigned int i, char str)
{
   i = 32;
   return (str - i);
}
int main(void)
{
   char    *str;
   char    *resultado;
 
   str = "?hola?guapa.?";
   printf("el resultado es: %s\n", str);
   resultado = ft_strmapi(str, mi_funcion);
   printf("el resultado es: %s\n", resultado);
   return (0);
}*/