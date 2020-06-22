/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 03:32:22 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/14 03:32:22 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void    ft_puthexa(int x, t_printf *data)
{
    //int i;
    char hexa[17]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

   // if (x < 10)
    //    ft_putnbr_fd(x, 1, data);
    //i = x;
    while (x >= 16)
    {

        ft_puthexa((x / 16), data);
       //data->counter += write(1, &hexa[(x % 16) - 1], 1);
       x = x % 16;
    }
    data->counter += write(1, &hexa[x], 1);
}



