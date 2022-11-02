/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:06 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/09 11:26:10 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*string;

	i = 0;
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}

// int main (void)
// {

// 	const char str[] = "Hey marvin!!";
// 	char *ret1;
// 	char *ret2;

// 	ret1 = memchr(str, 109, 10);
// 	printf("str_lib >> %s \n", ret1);
// 	ret2 = ft_memchr(str, 109, 10);
// 	printf("str_ft >> %s \n", ret2);

// 	printf("================\n");

// 	ret1 = memchr(str, 109, 3);
// 	printf("str_lib >> %s \n", ret1);
// 	ret2 = ft_memchr(str, 109, 3);
// 	printf("str_ft >> %s \n", ret2);

// 	printf("================\n");

// 	ret1 = memchr(str, 75, 10);
// 	printf("str_lib >> %s \n", ret1);
// 	ret2 = ft_memchr(str, 75, 10);
// 	printf("str_ft >> %s \n", ret2);

// 	return (0);
// }
