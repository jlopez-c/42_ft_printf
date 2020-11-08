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
    int x = 0;
    int y = 0;


    int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

  //  long long int c;
  //  char *  str = "Hi low";


//a = printf("%5");
//b = ft_printf("%5");

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

//a = printf("%-7u\n", 33);
//b = ft_printf("%-7u\n", 33);

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

//a = printf("%7");
//b = ft_printf("%7");


//printf("%10s\n", "Hey");
//ft_printf("%10s\n", "Hey");

//a = ("%23s\n", NULL);
//b = ("%23s\n", NULL);

//a = printf("%-7.5s\n", "tubular");
//b = ft_printf("%-7.5s\n", "tubular");


//printf("----%-2.s", "");


//a =printf("%.3s\n", "hello");
//b = ft_printf("%.3s\n", "hello");


//a =printf("%.*s\n", 3, "hello");
//b = ft_printf("%.*s\n", 3, "hello");

//a =printf("%-8.s\n",  str);
//b = ft_printf("%-8.s\n", str);

//a =printf("%09s\n", str);
//b = ft_printf("%09s\n", str);


//a =printf("%.*i\n", -6, -345);
//b = ft_printf("%.*i\n", -6, -345);

//a =printf("%-*.*s\n", -7, -3, "yolo\n");
//b = ft_printf("%-*.*s\n", -7, -3, "yolo\n");

//a =printf("%.*s\n", 3, "yolo\n"); //OK
//b = ft_printf("%.*s\n", 3, "yolo\n");

//a =printf("%.*s\n", 7, "yolo\n"); //OK
//b = ft_printf("%.*s\n", 7, "yolo\n");
//
//a =printf("%-*.s\n", 7, "yolo\n"); //OOOOKKK
//b = ft_printf("%-*.s\n", 7, "yolo\n");
//
//a =printf("%*s\n", 7, "yolo\n");
//b = ft_printf("%*s\n", 7, "yolo\n");

//a = printf("%.*s\n", -3, "hello"); //OKKKKK
//b = ft_printf("%.*s\n", -3, "hello");
//
//a =printf("%*.*s\n", 7, 3, "yolo\n");
//b = ft_printf("%*.*s\n", 7, 3, "yolo\n");

//a =printf("%00-s\n", str);
//b = ft_printf("%00-s\n", str);

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




//x = printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
//y = ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
//
////
//x = printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
//y = ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12

//
//x = printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
//y = ft_printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
//
//

//x = printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
//y = ft_printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
//
//x = printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
//y = ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
//


//x = printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
//y = ft_printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n\n", i, j, k, l, m, c, e, d); //T23
//
//
//x = printf("\n%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
//y = ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n\n", i, j, k, l, m, c, e, d); //T24
//
//
//x = printf("\n%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
//y = ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25


//x = printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
//y = ft_printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
//
//
//x = printf("\n%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
//y = ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
//
//
//x = printf("\n%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
//y = ft_printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32

/*
	while (a < 5) //T34-69
	{
		printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		ft_printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		ft_printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n\n\n\n\n\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		
		a++;
	}
*/

a = 2;
b = -2;


//
printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);

printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);


//printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
//ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
//
//
//printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
//ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);

/*
	a = -2;
	while(a < 5) //T70-177
	{
		b = -2;
		while (b < 5)
		{
			printf("------------\n\n");
			printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("------------\n\n\n\n\n");
			b++;
		}
		a++;
	}

*/

//
/*
*
*
*
*
*/

    printf("\033[35mlength printf:    %d\n", x);
    printf("length ft_printf: %d\n", y);

    return (0);
}