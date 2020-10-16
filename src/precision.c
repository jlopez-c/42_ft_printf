/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:41:04 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/10/15 21:50:42 by jlopez-c         ###   ########.fr       */
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
    //printf("Esta es la width de la precision%d\n", data->width_prec);
    //printf("Esta es la width normal%d\n", data->width);
    //printf("HOLA ESTA ES EL ESTADO DEL MINUS: %d\n", data->minus);
    //printf("Esta es el estado de la precision%d\n", data->precision);
}

void	ft_normal_and_width_precision(int length, t_printf *data)
{
	//if(data->width >= data->ar_len)
	//{	
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	//}
	length = 0;
	if (data->flags2 == 1)
	{
		data->counter += write(1, "-", 1);
		data->ar_len--;
		while ((data->width_prec - data->ar_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	else
	{
		while ((data->width_prec - data->ar_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
}

void	ft_minus_and_width_precision(int x, int length, t_printf *data)
{
    
    int     copy;

    copy = length;
    //printf("HOLA TUuuuuuuuuuu %d\n", copy);
	length = 0;
	if (data->flags2 == 1)
	{
		data->counter += write(1, "-", 1);
		data->ar_len--;
		while ((data->width_prec - data->ar_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	else
	{
		while ((data->width_prec - data->ar_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
    ft_putnbr_alone(x, data);
    while (copy > 0)
	{
		data->counter += write(1, " ", 1);
		copy--;
	}
}