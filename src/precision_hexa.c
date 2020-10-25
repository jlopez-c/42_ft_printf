/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:26:45 by user              #+#    #+#             */
/*   Updated: 2020/10/25 11:56:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_normal_and_width_precision_hex(int length, t_printf *data)
{
	//printf("HOLA este es el length %d", length);
	
	if (length > 0)
	{
		while (length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
	}
	length = 0;
	if (data->flags2 == 1)
	{
		data->counter += write(1, "-", 1);
		data->hex_len--;
		while ((data->width_prec - data->hex_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	else
	{
		while ((data->width_prec - ( data->hex_len ) + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	
}

void	ft_minus_and_width_precision_hex(unsigned int x, int length, t_printf *data)
{
    int     copy;

    copy = length;
	length = 0;
	if (data->flags2 == 1)
	{
		data->counter += write(1, "-", 1);
		data->hex_len--;
		while ((data->width_prec - data->hex_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	else
	{
		while ((data->width_prec - data->hex_len + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
    ft_puthexa_alone(x, data);
    while (copy > 0)
	{
		data->counter += write(1, " ", 1);
		copy--;
	}
}

void	ft_zero_exception_hex(unsigned int d, t_printf *data)
{
	if (d == 0 && data->width > 0 && (data->minus == 1 || data->zero == 0) && data->width_prec == 0)
	{
		while (data->width)
		{
			data->counter += write(1, " ", 1);
			data->width--;
		}	
	}
	if (data->width > 0 && (data->precision == 1 || data->zero == 1) && d == 0 && data->minus == 0)
	{
		while (data->width)
		{
			data->counter += write(1, "0", 1);
			data->width--;
		}
	}
	if (d == 0 && data->width_prec == 0 && data->minus == 0)
		return ;
}