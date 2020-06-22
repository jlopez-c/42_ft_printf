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

void    ft_puthexa(unsigned int x, t_printf *data)
{
    char *hexa;
    hexa = "0123456789abcdef";

    if (*data->str == 'X')
        hexa = "0123456789ABCDEF";
    if (x < 0)
         data->counter += write(1, "ffffffff", 8);
    else
    {
        while (x >= 16)
        {

            ft_puthexa((x / 16), data);
        x = x % 16;
        }
        data->counter += write(1, &hexa[x], 1);
    }
}