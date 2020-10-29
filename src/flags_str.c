/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:47:30 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/10/28 08:14:51 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_minus_str(char *str, int i, int length, t_printf *data)
{
	while (str[i])
	{
		data->counter += write(1, str + i, 1);
		i++;
	}
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	ft_init(data);
}

void	ft_print_width_str(char *str, int i, int length, t_printf *data)
{
	//printf("HOLA");
	if (data->zero == 1)
	{
		while (length > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
	}
	else
	{
		while (length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
	}
	data->width = 0;
	while (str[i])
	{
		data->counter += write(1, str + i, 1);
		i++;
	}
	ft_init(data);
}

void	ft_print_precision(char *str, int i, t_printf *data)
{
	if (data->width == 0 && data->width_prec > 0)
		data->width = data->width_prec;
	if (data->width_prec > data->ar_len)
	{
		while (data->ar_len > 0)
		{
			data->counter += write(1, str + i, 1);
			i++;
			data->ar_len--;
		}
	}
	else
	{
		while (data->width > 0)
		{
			data->counter += write(1, str + i, 1);
			i++;
			data->width--;
		}
	}
	ft_init(data);
}










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
}

void	ft_print_normal_and_dot_prec(char *str, int i, t_printf *data)
{
	int length;

	length = data->width - data->ar_len;
	if (data->width_prec < data->ar_len)
		length = data->width - data->width_prec;
	if (data->minus == 1 || (data->minus == 1 && data->zero == 1))
		ft_minus_and_width_precision_s(str, length, i, data);
	else
		ft_normal_and_width_precision_s(str, length, i, data);
	ft_init(data);
}

