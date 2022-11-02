/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:24 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/08 17:26:31 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

// int	main()
// {	
// 	const char str1[] = "Hey marvin!!";
// 	const char str2[] = "";
// 	int ret1;
// 	int ret2;

// 	ret1 = ft_strlen(str1);
// 	printf("str_lib >> %d \n", ret1);
// 	ret2 = ft_strlen(str1);
// 	printf("str_ft >> %d \n", ret2);

// 	printf("================\n");

// 	ret1 = ft_strlen(str2);
// 	printf("str_lib >> %d \n", ret1);
// 	ret2 = ft_strlen(str2);
// 	printf("str_ft >> %d \n", ret2);

// 	return (0);
// }