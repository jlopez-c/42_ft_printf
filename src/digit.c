/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 19:12:09 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/02 19:29:18 by jlopez-c         ###   ########.fr       */
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
	if (data->zero == 1 && data->minus == 0 && data->width_prec == 0 && n != 0)
		ft_print_zeros(x, length, data);
	//Este parrafor me imprime los espacios
	else if (data->zero == 0 && data->width > 0 && data->minus == 0 && data->precision == 0)
		ft_print_width(x, length, data);
	//Este parrafo maneja los menos
	else if (data->minus == 1 && data->width > 0 && (data->zero == 0 || data->zero == 1) && data->precision == 0)
		ft_print_minus(x, length, data);
	else if (data->width >= 0 && data->width_prec > 0)
		ft_print_prec_width(x, data);
	else if (n == 0 && (data->precision == 1 || data->zero == 1) && data->width_prec == 0)
	{
		ft_zero_exception(n, data);
		return ;
	}
	else
		ft_putnbr_alone(x, data);
}

void	ft_star_exception(int d, t_printf *data)
{
	int count;

	if (d < 0)
	{
		data->counter += write(1, "-", 1);
		d *= -1;
	}
	if (d >= 10)
		ft_star_exception((d / 10), data);
	count = (d % 10) + 48;
	data->counter += write(1, &count, 1);
	ft_init(data);
}

void	ft_digit(t_printf *data)
{
	int d;

	d = va_arg(data->args, int);
	data->ar_len = ft_strlen((ft_itoa(d)));
	if (data->width_prec < 0 && d < 0 && data->minus == 1)
	{
		ft_star_exception(d, data);
		return ;
	}
	if (d < 0 && data->precision == 1 && data->width_prec == 0)
		data->ar_len--;
	if (d < 0 && (data->zero == 1 || data->precision == 1) && data->width_prec == 0)
	{
		data->counter += write(1, "-", 1);
		d = -1 * d;
	}
	if (d < 0 && data->precision == 1 && data->width_prec > 0)
	{
		d = -1 * d;
		//Activo data->flags2 cuando el  numero es negativo y hay width y precision
		data->flags2 = 1;
	}
	ft_putnbr(d, data);
}
