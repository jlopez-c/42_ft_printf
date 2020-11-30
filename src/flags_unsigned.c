/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:50:56 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/30 11:04:46 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_print_zeros_u(unsigned int x, int length, t_printf *data)
{
			while (length > 0)
			{
				data->counter += write(1, "0", 1);
				length--;
			}
		ft_init(data);
		//ft_putnbr_unsig(x, data);
		ft_putnbr_unsig_alone(x, data);
}

void	ft_print_width_u(unsigned int x, int length, t_printf *data)
{
		while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
		ft_init(data);
		//ft_putnbr_unsig(x, data);
		ft_putnbr_unsig_alone(x, data);
}

void	ft_print_minus_u(unsigned int x, int length, t_printf *data)
{
	ft_putnbr_unsig_alone(x, data);
	while (length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	ft_init(data);
	//ft_putnbr_unsig(x, data);
	//ft_putnbr_unsig_alone(x, data);
}

void	ft_print_prec_width_u(unsigned int x, t_printf *data)
{
	int length;

	length = data->width - data->ar_len;
	if (data->width_prec > data->ar_len)
		length = data->width - data->width_prec;
	if (data->flags2 == 1 && data->width_prec > data->ar_len)
		length--;
	if (data->minus == 1 || (data->minus == 1 && data->zero == 1))
		ft_minus_and_width_precision_u(x, length, data);
	else
	{
		ft_normal_and_width_precision_u(length, data);
		ft_putnbr_unsig_alone(x, data);
	}
}