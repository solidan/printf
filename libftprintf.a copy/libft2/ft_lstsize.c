/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:02:33 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/21 11:54:17 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"   

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// void	ft_print_result2(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result2(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }

// int	main(void)
// {
// 	t_list	*elem;

// 	char	str [] = "lorem ipsum dolor sit";
// 	int		i;

// 	if (!(elem = ft_lstnew(str)))
// 		ft_print_result("NULL");
// 	else
// 	{
// 		if (!(elem->content))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(elem->content);
// 		if (!(elem->next))
// 		{
// 			write(1, "\n", 1);
// 			ft_print_result("NULL");
// 		}
// 	}

// 	write(1, "-", 1);

// 	i = 42;
// }