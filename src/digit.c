/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 19:12:09 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/08/31 19:12:14 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_putnbr_alone(int n, t_printf *data)
{
	int x;
	int count;

	x  = n;
	if (n < 0 && data->zero == 0 && data->precision == 0)
		{
			data->counter += write(1, "-", 1);
			if (n == -2147483648)
			{
				data->counter += write(1, "2", 1);
				x = -147483648;
			}
			x = -1 * x;
		}
		if (x >= 10)
		{
			ft_putnbr_alone((x / 10), data);
		}
		count = (x % 10) + 48;
		data->counter += write(1, &count, 1);
}

void	ft_putnbr(int n, t_printf *data)
{
	int	x;
	int length;

	x = n;
	length = data->width - (data->ar_len);
	//Este parrafo me imprime los zeros
	if ((data->zero == 1 || data->precision == 1) && data->minus == 0 && data->width_prec == 0)
		ft_print_zeros(x, length, data);
	//Este parrafor me imprime los espacios
	else if (data->zero == 0 && data->width > 0 && data->minus == 0 && data->precision == 0)
		ft_print_width(x, length, data);
	//Este parrafo maneja los menos
	else if (data->minus == 1 && data->width > 0 && (data->zero == 0 || data->zero == 1))
		ft_print_minus(x, length, data);
	else if (data->width > 0 && data->width_prec > 0)
		ft_print_prec_width(x, data);
	else
		ft_putnbr_alone(x, data);
}

void	ft_digit(t_printf *data)
{
	int d;

	d = va_arg(data->args, int);
	data->ar_len = ft_strlen((ft_itoa(d)));
	ft_take_precision(data);
	if (d < 0 && data->precision == 1 && data->width_prec == 0)
		data->ar_len--;
	if (d < 0 && (data->zero == 1 || data->precision == 1) && data->width_prec == 0)
	{
		data->counter += write(1, "-", 1);
		d = -1 * d;
	}
	else if (d < 0 && data->precision == 1 && data->width_prec > 0)
	{
		d = -1 * d;
		//Activo data->flags2 cuando el  numero es negativo y hay width y precision
		data->flags2 = 1;
	}
	ft_putnbr(d, data);
}
