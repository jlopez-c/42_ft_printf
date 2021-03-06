/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:41:04 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/14 11:40:09 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"
#include "../includes/printf.h"

void ft_take_precision(t_printf *data)
{
        if (*data->str == '.')
        {
            data->precision = 1;
            data->str++;
        }
        if (ft_isdigit(*data->str))
        {
            data->width_prec = ft_atoi(data->str);
            while (ft_isdigit(*data->str))
                data->str++;	
        }
}

void	ft_normal_and_width_precision(int x, int length, t_printf *data)
{

	//ft_state_flags(data);
	//printf("ENTRA AQUIIII__________");
	//if (data->ar_len == data->width_prec && data->width_prec > 0 && data->width > 0)
	//	length = 0;
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
		if ( x != -2147483648)
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
		while ((data->width_prec - ( data->ar_len ) + length) > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	ft_init(data);
}

void	ft_minus_and_width_precision(int x, int length, t_printf *data)
{
    int     copy;

    copy = length;
	length = 0;
	if (data->flags2 == 1)
	{
		if ( x != -2147483648)
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
	ft_init(data);
}

void	ft_zero_exception(int d, t_printf *data)
{
	if (d == 0 && data->width > 0 && (data->minus == 1 || data->zero == 0 || data->precision == 1) && data->width_prec == 0)
	{
		while (data->width)
		{
			data->counter += write(1, " ", 1);
			data->width--;
		}	
	}
	if (data->width > 0 && (data->precision == 1 || data->zero == 1) && d == 0 && data->minus == 0)
	{
		//printf("------%d", data->width);
		while (data->width)
		{
			data->counter += write(1, "0", 1);
			data->width--;
		}
	}
	if (d == 0 && data->width_prec == 0 && data->minus == 0)
		return ;
	ft_init(data);
}