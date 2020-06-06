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

//#include "../includes/libft.h"
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
  a =  printf("printf: %u\n", -1);
  b =  ft_printf("ft_printf: %i\n", 2);

//  a =  printf("printf: %s\n", "Hello");
//  b =  ft_printf("ft_printf: %s\n", "Hello");
   
    printf("\033[35mlength printf: %d\n", a);
    printf("length ft_printf:  %d\n", b);

    return (0);
}