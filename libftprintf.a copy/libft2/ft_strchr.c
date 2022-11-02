/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:20 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/09 11:53:23 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *)s;
	while (*chr != (const char)c)
	{
		if (!*chr)
			return (NULL);
		chr++;
	}
	return (chr);
}

// int main(void)
// {
//     char s[50] = "this is my string";
//     printf("%s", ft_strchr(s, 'i'));
//     return(0);
// }