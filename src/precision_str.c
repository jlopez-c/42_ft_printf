/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:14:11 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/14 14:24:44 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_normal_and_width_precision_s(char *str, int length, int i, t_printf *data)
{
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	if (data->width_prec > data->ar_len)
		data->width_prec = data->ar_len;
	while (data->width_prec > 0)
	{
		data->counter += write(1, str + i, 1);
		i++;
		data->width_prec--;
	}
	ft_init(data);
}

void	ft_minus_and_width_precision_s(char *str, int length, int i, t_printf *data)
{
	if (data->width_prec > data->ar_len)
		data->width_prec = data->ar_len;
    while (data->width_prec > 0)
		{
			data->counter += write(1, str + i, 1);
			i++;
			data->width_prec--;
		}
    while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	ft_init(data);
}

void	ft_negative_prec(char *str, int i, t_printf *data)
{
    /*
    int length;

	length = data->width - data->ar_len;
    if (*str == '0')
    {
        while (length > 0)
	    {
		    data->counter += write(1, " ", 1);
		    length--;
	    }
    }
    */
	//data->width_prec *= -1;
	while (data->ar_len > 0)
		{
			data->counter += write(1, str + i, 1);
			i++;
			data->ar_len--;
		}
	ft_init(data);
}

void	ft_print_normal_and_dot_prec(char *str, int i, t_printf *data)
{
	int length;

	length = data->width - data->ar_len;
	if (data->width_prec < 0)
		ft_negative_prec(str, i, data);
	if (data->width_prec < data->ar_len)
		length = data->width - data->width_prec;
	if (data->minus == 1 || (data->minus == 1 && data->zero == 1))
		ft_minus_and_width_precision_s(str, length, i, data);
	else
		ft_normal_and_width_precision_s(str, length, i, data);
	ft_init(data);
}