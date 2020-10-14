/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:50:56 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/25 18:50:58 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_zeros_u(int x, int length, t_printf *data)
{
			while (length > 0)
			{
				data->counter += write(1, "0", 1);
				length--;
			}
			data->zero = 0;
			data->precision = 0;
			data->width = 0;
		ft_putnbr_unsig(x, data);
		//ft_putnbr_unsig_alone(x, data);
}

void	ft_print_width_u(int x, int length, t_printf *data)
{
		while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
			data->zero = 0;
            data->precision = 0;
			data->width = 0;
		ft_putnbr_unsig(x, data);
		//ft_putnbr_unsig_alone(x, data);
}

void	ft_print_minus_u(int x, int length, t_printf *data)
{
	ft_putnbr_unsig_alone(x, data);
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	//data->zero = 0;
	data->minus = 0;
	//data->width = 0;
	ft_putnbr_unsig(x, data);
}