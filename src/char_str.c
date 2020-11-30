/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:58:41 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/24 18:23:33 by jlopez-c         ###   ########.fr       */
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
	if (data->width > 0 && data->minus == 1 && data->precision == 0)
	{
		ft_print_minus_str(str, i, length, data);
		//printf("HOLA");
	}
		
	else if (data->width == 0 && data->precision == 1 && data->width_prec >= 0)
		{
		ft_print_precision(str, i, data);
		//printf("HOLA");
	}
		
	else if (data->width >= 0 && data->precision == 1 && (data->width_prec > 0 || data->width_prec < 0))
			{
		ft_print_normal_and_dot_prec(str, i, data);
		//printf("HOLA");
	}
		
	else if (data->width > 0 && data->minus == 0 && data->width_prec == 0)
		ft_print_width_str(str, i, length, data);
	else
	{
		//printf("HOLA");
		while (str[i])
		{
			data->counter += write(1, str + i, 1);
			i++;
		}
	}
}

void		ft_exception_str(t_printf *data)
{
	if (data->width > 0 && data->precision == 1 && data->width_prec == 0)
	{
		while (data->width > 0)
		{
			data->counter += write(1, " ", 1);
			data->width--;
		}
	}
}

void		ft_str(t_printf *data)
{
	char	*str;

	str = va_arg(data->args, char *);
	ft_exception_str(data);
	if ((str == 0 && data->precision == 1 && data->width_prec == 0 && data->minus >= 0))
	{
		str = "";
	 	if(data->width > 0 && data->precision == 1)
		{
			while (data->width > 0)
			{
				data->counter += write(1, " ", 1);
				data->width--;
			}
		}
	}
	else if	(str == NULL)
		str = "(null)";
	data->ar_len = ft_strlen(str);

	ft_put_str(data, str);
}
