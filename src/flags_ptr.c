/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 20:20:01 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/02 18:52:16 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void ft_print_width_ptr(int length, t_printf *data)
{
    while(length > 0)
	{
		data->counter += write(1, " ", 1);
		length--;
	}
	//data->width = 0;
	ft_init(data);
}