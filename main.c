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

#include "includes/libft.h"
#include "includes/printf.h"

int main()
{
    int a;
    int b;

   // a = ft_printf("Hello W%orld\n");
   // b = printf("Hello World\n");

  //  a =  printf("%c\n", 'b');
    //    b =  ft_printf("%c\n", 'b');
  // b = ft_printf("%c\n", 'a');
    a =  printf("%s\n", "Hello");
    b =  ft_printf("%s\n", "Hello");
   
    printf("%d\n", b);
    printf("%d\n", a);

    return (0);
}