/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:35 by acuesta-          #+#    #+#             */
/*   Updated: 2022/09/13 12:22:33 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int main(void)
// {
//    char    *c;
//    int     fd;

//    c = "MAI" "sgfs";
//    fd = 1;
//    ft_putstr_fd(c,fd);
// }

// int		i;

// 	i = 0;
// 	if (s)
// 		while (s[i])
// 			write(fd, &s[i++], 1);