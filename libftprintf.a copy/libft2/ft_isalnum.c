/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:40:54 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/09 16:58:22 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

// int ft_isalnum(int c)

// {
// 	int	i;

// 	i = 0;
// 	if (i >= 48 && i <= 57)
// 	{
// 		return (1);
// 	}
// 	else if (i >= 65 && i <= 90)
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		return (0);
// 	}
// }

// int	main(void)
// {
// 	int ret1;
// 	int ret2;

// 	ret1 = isalnum(32);
// 	printf("lib >> %d \n", ret1);
// 	ret2 = ft_isalnum(32);
// 	printf("ft >> %d \n", ret2);

// 	printf("================\n");

// 	ret1 = isalnum(68);
// 	printf("lib >> %d \n", ret1);
// 	ret2 = ft_isalnum(68);
// 	printf("ft >> %d \n", ret2);

// 	printf("================\n");

// 	ret1 = isalnum(51);
// 	printf("lib >> %d \n", ret1);
// 	ret2 = ft_isalnum(51);
// 	printf("ft >> %d \n", ret2);

// 	printf("================\n");

// 	return (0);
// }