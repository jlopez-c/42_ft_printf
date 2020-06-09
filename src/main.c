/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 12:09:49 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/03 12:09:49 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

int main()
{
    int a;
    int b;

   // a = ft_printf("Hello W%orld\n");
   // b = printf("Hello World\n");
  
  //b = ft_printf("%c\n", 'a');
  //a =  printf("%c\n", 'b');
    //    b =  ft_printf("%c\n", 'b');
 //a =  printf("printf: %i\n", 22);
 //b =  ft_printf("ft_print%i\n", 25);

 a =  printf("printf: %u\n", -2147483647);
 b =  ft_printf("ftprint %u\n", -4294967297);

  //a =  printf("printf: %x\n", 73);
  //b =  printf("printf: %x\n", 'b');
  //b =  ft_printf("ft_printf: %x\n", a);

//  a =  printf("printf: %s\n", "Hello");
//  b =  ft_printf("ft_printf: %s\n", "Hello");
   
    printf("\033[35mlength printf: %d\n", a);
    printf("length ft_printf:  %d\n", b);

    return (0);
}