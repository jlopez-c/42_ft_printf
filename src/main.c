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
  
// // b = ft_printf("%c\n", 'a');
 // a =  printf("%c\n", 'b');
    //    b =  ft_printf("%c\n", 'b');
 a =  printf("printf:  %i\n", 89556);
 b =  ft_printf("ft_print %i\n", 89556);

// a =  printf("printf: %u\n", -25);
// b =  ft_printf("ftprint %u\n", -25);

  //a =  printf("printf: %x\n", 73);
  //b =  printf("printf: %x\n", 'b');
  //b =  ft_printf("ft_printf: %x\n", a);
  //printf("%p\n", &a);
  //printf("%p\n", &b);

  //printf("%x\n", 7000);
//b =  printf("printf:    %x\n", -2);
//b =    printf("printf:    %x\n", -342);
//    printf("printf:    %X\n", 326998);
//a =  ft_printf("ft_printf: %x\n", -342);
//ft_printf("ft_printf: %X\n", 326998);
  //printf("%x\n", 25);
//  printf("%X\n", -634);

  //printf("%X\n", 25);
// a = printf("%% %% %%\n");
// b = printf("%% %% %%\n");
 //b = ft_printf("%%");
 // a =  printf("printf: %s %d\n",  "Hello 42 Madrid 3f", 5);
// b =  ft_printf("ft_printf: %s, %c, %d.\n", "Hello 42 Madrid 3F", 'a', 33);
   
    printf("\033[35mlength printf: %d\n", a);
    printf("length ft_printf:  %d\n", b);

    return (0);
}