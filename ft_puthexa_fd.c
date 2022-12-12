/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:01:39 by acuesta-          #+#    #+#             */
/*   Updated: 2022/12/12 11:01:18 by acuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
 
 
ft_putchar(char c)
{
   write(1, &c, 1);
   return(1);
}
//para hacer esta funcion me he basado en la funcion strlen
size_t  ft_len_hex(unsigned int n) // devuelve el numero de digitos y n es el numero convertido
{
   size_t  length;

   length = 1;
   while (n > 15)
   {
       n /= 16;
       length++;
   }
}
 
 
size_t  ft_printf_hex(unsigned int n)
{
  
   size_t  length; //contador de caracteres para printear
   char    *hexa; //puntero de una string
 
   hexa = "0123456789abcdef"; //string
  
   length = 0; // inicializar contador
   length += ft_len_hex(n); //longitud  del numero hexadecimal
 
   if (n > 15)
       ft_printf_hex(n / 16); //l
   ft_putchar(hexa[n % 16]); // para printear el numero
  
   return (length);
}   
