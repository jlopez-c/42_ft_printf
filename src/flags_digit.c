/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:11:11 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/10/19 10:51:31 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_zeros(int x, int length, t_printf *data)
{
	while (length > 0)
		{
			data->counter += write(1, "0", 1);
			length--;
		}
		data->zero = 0;
		data->precision = 0;
		data->width = 0;
	ft_putnbr_alone(x, data);
}

void	ft_print_width(int x, int length, t_printf *data)
{
		while (length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
		data->zero = 0;
		data->width = 0;
		ft_putnbr_alone(x, data);
}

void	ft_print_minus(int x, int length, t_printf *data)
{
	ft_putnbr_alone(x, data);
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->zero = 0;
	data->minus = 0;
	data->width = 0;
}

//Esta funcion para cuando hay precision y width por ejemplo """"printf("%8.5d\n", 34);""""
void	ft_print_prec_width(int x, t_printf *data)
{
	int length;

	length = data->width - data->ar_len;
	if (data->width_prec > data->ar_len)
		length = data->width - data->width_prec;
	if (data->flags2 == 1 && data->width_prec > data->ar_len)
		length--;
	if (data->minus == 1 || (data->minus == 1 && data->zero == 1))
		ft_minus_and_width_precision(x, length, data);
	else
	{
		ft_normal_and_width_precision(length, data);
		ft_putnbr_alone(x, data);
	}
}
