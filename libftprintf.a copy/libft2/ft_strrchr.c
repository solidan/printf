/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:38 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/08 17:51:01 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	while (c > 127)
		c -= 128;
	if (c == 0)
		return ((char *)&s[(int)ft_strlen(s)]);
	pos = NULL;
	while (*s)
	{
		if (*s == c)
			pos = s;
		s++;
	}
	if (pos == 0 && s[0] != c)
		return (NULL);
	return ((char *)pos);
}

// int main(void)
// {
//     char s[50] = "this is my string";
//     printf("%s", ft_strrchr(s,'i'));
//     return(0);
// }
