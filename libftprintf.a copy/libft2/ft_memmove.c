/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:14 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/15 13:07:59 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (dst);
	if (s < d && i < len)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int     main(void)
{
	char dst1[] = "Hey marvin!!";
	char dst2[] = "Hey marvin!!";
	char dst3[] = "Hey marvin!!";
 	char dst4[] = "Hey marvin!!";
 	const char src[] = "Ola";
	const char src2[] = "Ola MarVin Yeh!";
	const char src3[] = "@@@";

 	memmove(dst1, src, 3);
 	printf("dst1 >> %s \n", dst1);
 	ft_memmove(dst2, src, 3);
	printf("dst2 >> %s \n", dst2);

	printf("================\n");

	memmove(dst3, src2, 10);
	printf("dst3 >> %s \n", dst3);
	ft_memmove(dst4, src2, 10);
 	printf("dst4 >> %s \n", dst4);
 	printf("================\n");

 	memmove(dst1, src3, 0);
		printf("dst1 >> %s \n", dst1);
	 	ft_memmove(dst2, src3, 0);
	 	printf("dst2 >> %s \n", dst2);
	 	return (0);
	 }*/
// char	*s;
	// char	*d;
	// size_t	i;
	// s = (char *)src;
	// d = (char *)dst;
	// i = 0;
	// if (d > s)
	// 	while (len-- > 0)
	// 		d[len] = s[len];
	// else
	// 	while (i < len)
	// 	{
	// 		d[i] = s[i];
	// 		i++;
	// 	}
	// return (dst);