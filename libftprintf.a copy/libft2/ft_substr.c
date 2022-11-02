/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:51 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/16 13:51:09 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*i;

	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	i = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
	{
		*i = '\0';
		return (i);
	}
	if (!i)
	{
		return (0);
	}
	ft_strlcpy(i, &s[start], len + 1);
	return (i);
}

/*
{
 
   char            *s_new;
   unsigned int    i;
 

   if (s == NULL)
       return (NULL);
  
   if (len > ft_strlen(s))

       len = ft_strlen(s);
   i = 0;

   s_new = (char *)malloc(sizeof(char) * (len + 1));

   if (!s_new)
       return (NULL);

   while (start > ft_strlen(s))
   {

       *s_new = '\0';
       return (s_new);
   }

   while (len > 0)
   {

       s_new[i] = s[start];
       i++;
       start++;
       len--;
   }

   s_new[i] = '\0';
   return (s_new);
}
*/
