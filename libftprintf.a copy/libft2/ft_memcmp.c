/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:09 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/08 17:27:01 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;	
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "Hey marvin!!";
// 	char str2[] = "Hey Marvin!!";
// 	int ret1;
// 	int ret2;
// 	printf("str1 >> %s \n", str1);
// 	printf("str2 >> %s \n", str2);
// 	ret1 = ft_memcmp(str1, str2, 12);
// 	printf("cmp_lib >> %d \n", ret1);
// 	ret2 = ft_memcmp(str1, str2, 12);
// 	printf("cmp_fun >> %d \n", ret2);
// 	printf("================\n");
// 	ret1 = 0;
// 	ret2 = 0;
// 	return (0);
// }
