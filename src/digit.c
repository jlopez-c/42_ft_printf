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
	if (n < 0)
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
	//Este parrafo me imprime los zeros
	if (data->zero == 1)
	{
		length = data->width - data->ar_len;
			while (length > 0)
			{
				data->counter += write(1, "0", 1);
				length--;
			}
			data->zero = 0;
			data->width = 0;
		ft_putnbr_alone(x, data);
	}
	//Este parrafor me imprime los espacios
	else if (data->zero == 0 && data->width > 0 && data->minus == 0)
	{
		length = data->width - data->ar_len;
			while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
			data->zero = 0;
			data->width = 0;
		ft_putnbr_alone(x, data);
	}
	else if (data->minus == 1 && data->width > 0)
	{
		length = data->width - data->ar_len;
		ft_putnbr_alone(x, data);
			while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
			data->zero = 0;
			data->width = 0;
	}	
	else
		ft_putnbr_alone(x, data);
}

void	ft_digit(t_printf *data)
{
	int d;

	d = va_arg(data->args, int);
	data->ar_len = ft_strlen((ft_itoa(d)));
	ft_putnbr(d, data);
}
