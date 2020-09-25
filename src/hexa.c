/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:32:17 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/01 18:40:18 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_length_hexa(unsigned int x, t_printf *data)
{
	while (x >= 16)
		{
			ft_length_hexa((x / 16), data);
			x = x % 16;
		}
	data->hex_len++;
}

void	ft_puthexa_alone(unsigned int x, t_printf *data)
{
	char	*hexa;
	//char	*num_hexa;
	
	hexa = "0123456789abcdef";
	//num_hexa = "";
	if (*data->str == 'X')
		hexa = "0123456789ABCDEF";
	while (x >= 16)
		{
			ft_puthexa_alone((x / 16), data);
			x = x % 16;
		}
	//num_hexa[i] = hexa[x];
	data->counter += write(1, &hexa[x], 1);
}

void	ft_puthexa(unsigned int x, t_printf *data)
{
	int		length;

	length = data->width - data->hex_len;
	//	printf("\n%d\n", length);


	//Este parrafo maneja los menos
	if (data->minus == 1 && data->width > 0 && (data->zero == 0))
		ft_print_minus_hex(x, length, data);
	//Este parrafo me imprime los zeros
	else if ((data->zero == 1 || data->precision == 1) && data->minus == 0)
		ft_print_zeros_hex(x, length, data);
	else if (data->zero == 0 && data->width > 0 && data->minus == 0)
		ft_print_width_hex(x, length, data);
	else
		ft_puthexa_alone(x, data);
}

void	ft_hexa(t_printf *data)
{
	unsigned int x;

	x = va_arg(data->args, unsigned int);
	ft_length_hexa(x, data);
	ft_puthexa(x, data);
}
