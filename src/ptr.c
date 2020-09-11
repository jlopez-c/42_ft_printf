/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:06:47 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/22 10:06:47 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void    ft_transformer(unsigned long int ptr_hex_val, t_printf *data)
{
    unsigned long int count;
    char *s_ptr;

    if (ptr_hex_val)
        s_ptr = "0123456789abcdef";
    if (ptr_hex_val >= 16)
    {
        count = ptr_hex_val % 16;
        ft_transformer(ptr_hex_val / 16, data);
        data->counter += write(1, &s_ptr[count], 1);
    }
    if (ptr_hex_val < 16)
    {
        ptr_hex_val = ptr_hex_val % 16;
         data->counter += write(1, &s_ptr[ptr_hex_val], 1);
    }
}

void    ft_putptr(unsigned long int ptr, t_printf *data)
{
    unsigned long int ptr_hex_val;
    int               length;  

    ptr_hex_val = ptr;
    //Esta length tiene un parche muy serio que peude dar problemas
    length = data->width - data->ar_len - 4;

	////Cuando tiene width
	if (data->width > 0 && data->minus == 0) 
    {
		ft_print_width_ptr(length, data);
        data->counter += write(1, "0x", 2);
        ft_transformer(ptr_hex_val, data);
    }
    ////Cuando tiene minus
	else if (data->width > 0 && data->minus == 1) 
    {
        data->counter += write(1, "0x", 2);
        ft_transformer(ptr_hex_val, data);
		ft_print_width_ptr(length, data);
    }
    else
    {
        data->counter += write(1, "0x", 2);
        ft_transformer(ptr_hex_val, data);
    }
}

void	ft_ptr(t_printf *data)
{
	unsigned long int ptr;

	ptr = va_arg(data->args, unsigned long int);
    data->ar_len = ft_strlen(ft_itoa(ptr));
	ft_putptr(ptr, data);
}