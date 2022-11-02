/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:11 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/08 17:26:57 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dst);
}

// int     main(void)
// {
// 	char dst1[] = "Hey marvin!!";
// 	char dst2[] = "Hey marvin!!";
// 	char dst3[] = "Hey marvin!!";
// 	char dst4[] = "Hey marvin!!";
// 	char src[] = "Ola";
// 	char src2[] = "Ola MarViN Yeh!";

// 	memcpy(dst1, src, 3);
// 	printf("dst1 >> %s \n", dst1);
// 	ft_memcpy(dst2, src, 3);
// 	printf("dst2 >> %s \n", dst2);

// 	printf("================\n");

// 	memcpy(dst3, src2, 10);
// 	printf("dst3 >> %s \n", dst3);
// 	ft_memcpy(dst4, src2, 14);
// 	printf("dst4 >> %s \n", dst4);
// 	return (0);
// }
