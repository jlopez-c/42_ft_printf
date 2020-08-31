/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/07/26 19:12:07 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

/*
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
	char percent = '%';
	//int width;
	data->str++;
	//width = *data->str - 48;

	/* intento de manejar el width
	if (*data->str >= 1)
	{
		while (width > 0)
		{
			data->counter+= write(1, " ", 1);
			width--;
		}
	}
	data->str++;
	*/
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
	{
		write(1, &percent, 1);
		data->counter++;
	}	
}

int		ft_printf(const char *format, ...)
{
	t_printf data;

	va_start(data.args, format);
	data.str = (char *)format;
	data.counter = 0;
	while (*data.str)
	{
		if (*data.str == '%')
			ft_conversion(&data);
			//printf("Holi\n");
		else
			data.counter += write(1, data.str, 1);

		data.str++;
	}
	va_end(data.args);
	return (data.counter);
}