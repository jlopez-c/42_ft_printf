/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:58:41 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/10/25 19:09:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void		ft_put_char(t_printf *data, char c)
{
	int		length;

	length = data->width - 1;

	if (data->width > 0 && data->minus == 1)
		ft_print_minus_c(c, length, data);
	else if (data->width > 0 && data->minus == 0)
		ft_print_width_c(c, length, data);
	else
		data->counter += write(1, &c, 1);
}

void		ft_char(t_printf *data)
{
	char 	c;

	c = (char)va_arg(data->args, int);
	ft_put_char(data, c);
}

void		ft_put_str(t_printf *data, char *str)
{
	int		i;
	int		length;

	i = 0;
	length = data->width - data->ar_len;
	//Cuando hay un minus
	if (data->width > 0 && data->minus == 1)
		ft_print_minus_str(str, i, length, data);
	//Cuando hay un . y width > 0
	else if (data->width >= 0 && data->precision == 1)
	{
		//printf("HOLiiiii");
		ft_print_precision(str, i, data);
	}
		
	////Cuando tiene width
	else if (data->width > 0 && data->minus == 0)
	{
		//printf("HOLAAAAAA");
		ft_print_width_str(str, i, length, data);
		
	}
		
	////Cuando todo va normal
	else
	{
		while (str[i])
		{
			data->counter += write(1, str + i, 1);
			i++;
		}
	}
}

void		ft_str(t_printf *data)
{
	char	*str;

	str = va_arg(data->args, char *);
	//if (!str)
	//	return ;
	if	(str == NULL)
		str = "(null)";
	data->ar_len = ft_strlen(str);
	ft_put_str(data, str);
}
