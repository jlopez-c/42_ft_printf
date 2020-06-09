/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/09 07:43:42 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_char(t_printf *data)
{
	char c;
	
	c = (char)va_arg(data->args, int);
	data->counter += write(1, &c, 1);
}

void	ft_str(t_printf *data)
{
	int i;
	char *str;
	
	str = va_arg(data->args, char *);
	i = 0;
	while (str[i])
	{ 
		data->counter += write(1, str + i, 1);
		i++;
	}
}

void	ft_digit(t_printf *data)
{
	int 	d;

	d = va_arg(data->args, int);
	ft_putnbr_fd(d, 1, data);
}

void	ft_unsigned(t_printf *data)
{
	int 	u;

	u = va_arg(data->args, int);
	ft_putnbr_unsig(u, 1, data);
}

void	ft_conversion(t_printf *data)
{
	data->str++;
	
	if (*data->str == 'c')
		ft_char(data);
	if (*data->str == 's')
		ft_str(data);
	//if (*data->str == 'p')

	if (*data->str == 'd' || *data->str == 'i')
		ft_digit(data);

	if (*data->str == 'u')
		ft_unsigned(data);

	//if (*data->str == 'x' || *data->str == 'X')

	//if (*data->str == '%')
		
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
