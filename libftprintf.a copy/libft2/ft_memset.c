/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:16 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/08 17:26:46 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

// int     main(void)
// {
// 	char str1[] = "Hey marvin!!";
// 	char str2[] = "Hey marvin!!";

// 	memset(str1, 64, 3);
// 	printf("str1 >> %s \n", str1);
// 	ft_memset(str2, 64, 3);
// 	printf("str2 >> %s \n", str2);
// 	return (0);
// }