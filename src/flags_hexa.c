/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:14:01 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/14 12:14:01 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_width_hex(unsigned int x, int length, t_printf *data)
{
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->precision = 0;
	data->width = 0;
	data->zero = 0;
	ft_puthexa(x, data);
}

void	ft_print_zeros_hex(unsigned int x, int length, t_printf *data)
{
	while (length > 0)
	{
		data->counter += write(1, "0", 1);
		length--;
	}
	//printf("VAMOS A VEEER%d", data->precision);
	data->precision = 0;
	data->width = 0;
	data->zero = 0;
	ft_puthexa(x, data);
}

void	ft_print_minus_hex(unsigned int x, int length, t_printf *data)
{
	ft_puthexa_alone(x, data);
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->width = 0;
	data->zero = 0;
}