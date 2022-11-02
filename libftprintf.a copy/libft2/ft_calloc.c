/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:40:51 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/21 11:13:23 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

/* int main(void)
{
   int *pData;
 
   int i, n;
   printf("El número de dígitos que se introducirán:");
   scanf("%d", &i);
   pData = (int *)calloc(i, sizeof(int));
   if (pData == NULL)
       exit(1);
   for (n = 0; n < i; n++)
   {
       printf("ingresa un número #% d:", n + 1);
       scanf("%d", &pData[n]);
   }
   printf("El número que ingresaste es:");
   for (n = 0; n < i; n++)
       printf("%d ", pData[n]);
   free(pData);
   system("pause");
   return (0);
}*/
