/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:24:32 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/02 18:52:03 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void		ft_print_minus_c(char c, int length, t_printf *data)
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

void		ft_print_width_c(char c, int length, t_printf *data)
{
	while(length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	data->width = 0;
	data->counter += write(1, &c, 1);
}