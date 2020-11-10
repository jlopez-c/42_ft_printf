/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:11:11 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/10 19:34:45 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_zeros(int x, int length, t_printf *data)
{
	if (x < 0 && data->precision == 1 && data->width_prec <= 0 &&
	data->zero == 1 && data->minus == 1 && data->flags2 != -1 &&
	data->width_prec < data->width && x != -2147483648) 
	{
		data->counter += write(1, "-", 1);
		x = x * -1;
	}
	while (length > 0)
	{
		data->counter += write(1, "0", 1);
		length--;
	}
	ft_init(data);
	ft_putnbr_alone(x, data);
}

void	ft_print_width(int x, int length, t_printf *data)
{
		while (length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
		ft_init(data);
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
	ft_init(data);
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
		ft_normal_and_width_precision(x, length, data);
		ft_putnbr_alone(x, data);
	}
	ft_init(data);
}
