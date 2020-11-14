/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:47:30 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/14 14:15:18 by jlopez-c         ###   ########.fr       */
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