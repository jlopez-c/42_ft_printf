/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:41:04 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/29 16:41:07 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"
#include "../includes/printf.h"

void ft_take_precision(t_printf *data)
{
    if (data->precision == 1 || *data->str == '.')
    {
        if (*data->str == '.')
        {
            data->precision = 1;
            data->str++;
        }
      //  printf("ESTE ES POR DOnde VOY %c ", *data->str);
        if (ft_isdigit(*data->str))
        {
            data->width_prec = ft_atoi(data->str);
           // printf("Esta es la width de la precision%d\n", data->width_prec);
            while (ft_isdigit(*data->str))
                data->str++;	
        }
    }
   // printf("Esta es la width de la precision%d\n", data->width_prec);
    //printf("Esta es la width normal%d\n", data->width);
    //printf("Esta es el estado de la precision%d\n", data->precision);
}