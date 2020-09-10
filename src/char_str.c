/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:58:41 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/08/31 19:24:19 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void		ft_put_char(t_printf *data, char c)
{
	int		length;

	length = data->width - 1;

	if (data->width > 0 && data->minus == 1)
	{
		data->counter += write(1, &c, 1);
		while(length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
		data->width = 0;
	}
	else if (data->width > 0 && data->minus == 0)
	{
		while(length > 0)
		{
			data->counter += write(1, " ", 1);
			length--;
		}
		data->width = 0;
		ft_put_char(data, c);
	}
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
	if (data->width > 0 && data->minus == 1)
	{
		while (str[i])
		{
			data->counter += write(1, str + i, 1);
			i++;
		}
		length = data->width - data->ar_len;
			while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
			data->width = 0;
	}
	////Cuando tiene width
	else if (data->width > 0 && data->minus == 0) 
	{
		length = data->width - data->ar_len;
			while (length > 0)
			{
				data->counter += write(1, " ", 1);
				length--;
			}
			data->width = 0;
		ft_put_str(data, str);
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
	data->ar_len = ft_strlen(str);
	ft_put_str(data, str);
}
