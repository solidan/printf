/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:49 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/19 11:27:36 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
 int main()
  {
	char s[] = "abccaassThis is string. Continue.acccba";
  	char *result = ft_strtrim(s, "abc");
  	printf("The result is %s\n", result);
  	return 0;
  }
*/
// gcc ft_strtrim.c ft_strchr.c ft_substr.c ft_strlen.c
// ft_strlcpy.c para poder usarlo 