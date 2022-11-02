/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:33:36 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/22 10:06:19 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == 0 || new == 0)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

//  void	ft_print_result(t_list *elem)
//  {
//  	int		len;
//  	len = 0;
//  	while (((char *)elem->content)[len])
//  			len++;
//  	write(1, elem->content, len);
//  	write(1, "\n", 1);
//  }

//  t_list	*ft_lstnewone(void *content)
//  {
//  	t_list	*elem;
//  	elem = (t_list *)malloc(sizeof(t_list));
//  	if (!elem)
//  			return (NULL);
//  	if (!content)
//  			elem->content = NULL;
//  	else
//  			elem->content = content;
//  	elem->next = NULL;
//  	return (elem);
//  }

//  int	main(void)
//  {
//  	t_list		*begin;
//  	t_list		*elem;
//  	t_list		*elem2;
//  	t_list		*elem3;
//  	t_list		*elem4;
//  	char		*str = strdup("lorem");
//  	char		*str2 = strdup("ipsum");
//  	char		*str3 = strdup("dolor");
//  	char		*str4 = strdup("sit");
//  	elem = ft_lstnewone(str);
//  	elem2 = ft_lstnewone(str2);
//  	elem3 = ft_lstnewone(str3);
//  	elem4 = ft_lstnewone(str4);
//  	begin = NULL;
//  	ft_lstadd_back(&begin, elem);
//  	ft_lstadd_back(&begin, elem2);
//  	ft_lstadd_back(&begin, elem3);
//  	ft_lstadd_back(&begin, elem4);
//  	while (begin)
//  	{
//  		ft_print_result(begin);
//  		begin = begin->next;
//  	}
//  	return (0);
//  }