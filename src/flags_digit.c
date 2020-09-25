/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:11:11 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/17 09:40:08 by jlopez-c         ###   ########.fr       */
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
	//data->width = 0;
}