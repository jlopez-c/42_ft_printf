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
    int a = 0;
    int b = 0;
   //  int c = 0;

   // a = ft_printf("Hello W%orld\n");
   // b = printf("Hello World\n");
  
// // b = ft_printf("%c\n", 'a');
 // a =  printf("%c\n", 'b');
    //    b =  ft_printf("%c\n", 'b');
 //a =  printf("printf:  %i\n", 89556);
 //b =  ft_printf("ft_print %i\n", 89556);

// a =  printf("printf: %u\n", -25);
// b =  ft_printf("ftprint %u\n", -25);

  //a =  printf("printf: %x\n", 73);
  //b =  printf("printf: %x\n", 'b');
  //b =  ft_printf("ft_printf: %x\n", a);
//b =  ft_printf("%p\n", &a);
//c =  printf("%p\n", &a);

  //printf("%x\n", 7000);
//b =  printf("printf:    %x\n", -2);
//b =    printf("printf:    %x\n", -342);
//    printf("printf:    %X\n", 326998);
//a =  ft_printf("ft_printf: %X\n", -342);
//ft_printf("ft_printf: %X\n", 326998);
  //printf("%x\n", 25);
//  printf("%X\n", -634);

  //printf("%X\n", 25);
 //a = printf("%% %% %%\n");
 //b = ft_printf("%% %% %%\n");
 //b = ft_printf("%%");
 // a =  printf("printf: %s %d\n",  "Hello 42 Madrid 3f", 5);
//a =  printf("   printf: %%%%, %s, %X, %x, %c, %5d, %u, %p.\n", "Hello 42 Madrid", 29, 29, 'a', 33, -42, &c);
//b =  ft_printf("ft_printf: %%%%, %s, %X, %x, %c, %5d, %u, %p.\n", "Hello 42 Madrid", 29, 29, 'a', 33, -42, &c);

//printf("%*d\n", 3, 56);
//ft_printf("%*d\n", 3, 56);

//printf("%*i\n", 5, 56);
//ft_printf("%*i\n", 5, 56);




//-------------------COMIENZAAN LOS FLAGSSSS-----------------------//

//printf("%10s\n", "Hey");
//ft_printf("%10s\n", "Hey");

 //a = printf("%05d\n", 42);
 //b = ft_printf("%02d\n", 42);

 // a = printf("%010d\n", 6589); 
 // b = ft_printf("%010d\n", 6589);

//a = printf("%*d, %045d\n", 10, 6589, 25); 
//b = ft_printf("%*d, %045d\n", 10, 6589, 25);

a = printf("%42s\n", "Positividad al poder.");
b = ft_printf("%42s\n", "Positividad al poder.");

a = printf("%42c\n", '1');
b = ft_printf("%42c\n", '1');

  //printf("%-8d\n", 6); 
  //ft_printf("%0-8d\n", 6);


// a = printf("%.15d\n", 6); 
  //printf("%.6d\n", 6); 

    printf("\033[35mlength printf:    %d\n", a);
    printf("length ft_printf: %d\n", b);

    return (0);
}