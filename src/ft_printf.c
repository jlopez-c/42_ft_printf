/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/06 08:48:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

/*
void	ft_flags(t_printf *data)
{
	int width;
	width = *data->str;
	if (width == 1)
	{
		while (width > 0)
		{
			write(1, "0", 1);
			width--;
		}
	}
}

void	ft_width(t_printf *data)
{
	int width;
	width = *data->str;
	while (width > 0)
	{
		data->counter+= write(1, "0", 1);
		width--;
	}
	//ft_conversion(&data);
}
*/

void	ft_conversion(t_printf *data)
{
	//data->str++;
	if (*data->str == 'c')
		ft_char(data);
	if (*data->str == 's')
		ft_str(data);
	if (*data->str == 'p')
		ft_ptr(data);
	if (*data->str == 'd' || *data->str == 'i')
		ft_digit(data);
	if (*data->str == 'u')
		ft_unsigned(data);
	if (*data->str == 'x' || *data->str == 'X')
		ft_hexa(data);
	if (*data->str == '%')
		ft_percent(data);
}
void	ft_width(t_printf *data)
{
	if (*data->str == '*')
	{
		data->width = va_arg(data->args, int);
		//printf("%d\n", data->width);
		if (data->width < 0)
		{
			data->width *= -1;
			//x->flags2 = 1;
			//x->flags = ' ';
		}
		data->str++;
	}
	else
	{
		data->width = ft_atoi(data->str);
		//printf("%d\n", data->width);
		while (ft_isdigit(*data->str))
			data->str++;	
		/*
		while (data->width > 1)
		{
			data->counter += write(1, " ", 1);
			data->width--;
		}
		*/
	}
	//ft_conversion(data);
}

void	ft_options(t_printf *data)
{
	data->str++;
	//if (*data->str  == '-' || *data->str  == '0')
	//	ft_flags(x);
	if (*data->str  == '*' || ft_isdigit(*data->str))
		ft_width(data);
	//if (*data->str  == '.')
	//	ft_precision(x);
	if (*data->str  != '\0')
		ft_conversion(data);
	//if (*data->str  == '%')
	//{
	//	ft_print_finalstring("%", x);
	//	return ;
	//}
}



int		ft_printf(const char *format, ...)
{
	t_printf data;

	va_start(data.args, format);
	data.str = (char *)format;
	data.counter = 0;
	data.width = 0;
	while (*data.str)
	{
		if (*data.str == '%')
			ft_options(&data);
		else
			data.counter += write(1, data.str, 1);
		data.str++;
	}
	va_end(data.args);
	return (data.counter);
}