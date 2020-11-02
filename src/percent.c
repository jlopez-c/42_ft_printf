/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 19:33:02 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/02 18:53:26 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void		ft_print_minus_pct(char c, int length, t_printf *data)
{
	data->counter += write(1, &c, 1);
	while(length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->width = 0;
    data->minus = 0;
}

void		ft_print_width_pct(char c, int length, t_printf *data)
{
	while(length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->width = 0;
	data->counter += write(1, &c, 1);
}

void        ft_print_zero_pct(char c, int length, t_printf *data)
{
    while(length > 0)
	{
		data->counter += write(1, "0", 1);
		length--;
	}
	data->width = 0;
    data->zero = 0;
	data->counter += write(1, &c, 1);
}

void        ft_percent(t_printf *data)
{
    char pct;
    int	length;
    
    pct = '%';
	length = data->width - 1;

	if (data->width > 0 && data->minus == 1)
		ft_print_minus_pct(pct, length, data);
    else if (data->width > 0 && data->minus == 0 && data->zero == 1)
		ft_print_zero_pct(pct, length, data);
	else if (data->width > 0 && data->minus == 0)
		ft_print_width_c(pct, length, data);
	else
		data->counter += write(1, &pct, 1);
}