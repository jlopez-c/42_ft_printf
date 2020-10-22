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
    long long int c;

   // a = ft_printf("Hello W%orld\n");
   // b = printf("Hello World\n");
  
// // b = ft_printf("%c\n", 'a');
 // a =  printf("%c\n", 'b');
    //    b =  ft_printf("%c\n", 'b');
 //a =  printf("printf:  %i\n", 89556);
 //b =  ft_printf("ft_print %i\n", 89556);

 //a =  printf("printf: %u\n", 26);
 //b =  ft_printf("ftprint %u\n", 26);

 //a =  printf("printf: %.10u\n", 26);
 //b =  ft_printf("ftprint %.10u\n", 26);

a = printf("%-7u\n", 33);
b = ft_printf("%-7u\n", 33);

// a = printf("%.6d\n", -33);
// b = ft_printf("%.6d\n", -33);
//
// a =  printf("printf: %20u\n", -99);
// b =  ft_printf("ftprint %u\n", -25);

  //a =  printf("printf: %x\n", 73);
//  b =  printf("   printf: %-020x\n", 158);
//  a =  ft_printf("ft_printf: %20x\n", 158);
//b =  ft_printf("%30p\n", &c);
//a =  printf("%30p\n", &c);

  //printf("%x\n", 7000);
//a =  printf("   printf: %-85X\n", 10254555);
//b =    printf("printf:    %x\n", -342);
//    printf("printf:    %X\n", 326998);
//b =  ft_printf("ft_printf: %-85X\n", 10254555);
//ft_printf("ft_printf: %X\n", 326998);
  //printf("%x\n", 25);
//  printf("%X\n", -634);

  //printf("%X\n", 25);
 //a = printf("%% %% %%\n");
 //b = ft_printf("%% %% %%\n");
 //b = ft_printf("%%");
  //a =  printf("printf: %s %d\n",  "Hello 42 Madrid 3f", 5);
//a =  printf("   printf: %%%%, %20s, %X, %x, %10c, %5d, %u, %p .\n", "Hello 42 Madrid", -1, 0, 'a', 33, -42, &c);
//b =  ft_printf("ft_printf: %%%%, %20s, %X, %x, %10c, %5d, %u, %p .\n", "Hello 42 Madrid", -1, 0, 'a', 33, -42, &c);

//printf("%*d\n", 3, 56);
//ft_printf("%*d\n", 3, 56);

//printf("%*i\n", 5, 56);
//ft_printf("%*i\n", 5, 56);




//-------------------COMIENZAAN LOS FLAGSSSS-----------------------//

//printf("%10s\n", "Hey");
//ft_printf("%10s\n", "Hey");

 //a = printf("%-8d\n", 42);
 //b = ft_printf("%-8d\n", 42);

 // a = printf("%010d\n", 6589); 
 // b = ft_printf("%010d\n", 6589);
//
//a = printf("%-*d, %.45d, %.5i, %-6X\n", 10, 6589, 25, 42, 5995); 
//b = ft_printf("%-*d, %.45d, %.5i, %-6X\n", 10, 6589, 25, 42, 5995);

//a = printf("%-45d\n", 25); 
//b = ft_printf("%-45d\n", 25);
//a = printf("%42s\n", "Positividad al poder.");
//b = ft_printf("%42s\n", "Positividad al poder.");

//a = printf("%-42c\n", 'i');
//b = ft_printf("%-42c\n", 'i');

  //printf("%-8d\n", 6); 
  //ft_printf("%0-8d\n", 6);

//------------------FLags para la precision en los digit---------------//
//a = printf("%.15d\n", 66); 
//b = ft_printf("%.15d\n", 66); 

//a = printf("%5c\n", 'H'); 
//b = printf("%5c\n", 'H'); 

//a = printf("%-20s\n", "Hello world"); 
//b = ft_printf("%-20s\n", "Hello world"); 

//a = printf("%.3s\n", "Hello world"); 
//b = ft_printf("%.3s\n", "Hello world"); 



//
//a = printf("10.2d %10.2d\n", -55555);
//b = ft_printf("10.2d %10.2d\n", -55555);
//
//
//a = printf("%.6d\n", -3);
//b = ft_printf("%.6d\n", -3);
//
//a = printf("%8.3d\n", 34);
//b = ft_printf("%8.3d\n", 34);
//
//a = printf("%10.5d\n", -216);
//b = ft_printf("%10.5d\n", -216);
//
//a = printf("%8.3d\n", -8473);
//b = ft_printf("%8.3d\n", -8473);

//a = printf("%-8.5d\n", 34);
//b = ft_printf("%-8.5d\n", 34);

//a = printf("%0-8.5d\n", 34);
//b = ft_printf("%0-8.5d\n", 34);

//a = printf("%.6d\n", -3);
//b = ft_printf("%.6d\n", -3);

//a = printf("%9.5d\n", -216);
//b = ft_printf("%9.5d\n", -216);


//a = printf("%5.3d\n", 0);
//b = ft_printf("%5.3d\n", 0);

//a = printf("%.3d\n", 2);
//b = ft_printf("%.3d\n", 2);

//a = printf("%.*d\n", -3, 0);
//b = ft_printf("%.*d\n", -3, 0);

//a = printf("%03d\n", 0);
//b = ft_printf("%03d\n", 0);

//a = printf("%.d\n", 0);
//b = ft_printf("%.d\n", 0);
//
//a = printf("%.0d\n", 0);
//b = ft_printf("%.0d\n", 0);
//
//a = printf("%5.0d\n", 0);
//b = ft_printf("%5.0d\n", 0);
//
//a = printf("%5.d\n", 0);
//b = ft_printf("%5.d\n", 0);

    printf("\033[35mlength printf:    %d\n", a);
    printf("length ft_printf: %d\n", b);

    return (0);
}