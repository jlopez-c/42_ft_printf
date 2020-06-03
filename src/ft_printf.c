/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/03 18:42:18 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_char(t_printf *data)
{
	char result = (char)va_arg(data->args, int);
	data->counter += write(1, &result, 1);
}

void	ft_str(t_printf *data)
{
	int i;
	char *result = va_arg(data->args, char *);
	i = 0;
	while (result[i])
	{ 
		data->counter += write(1, result + i, 1);
		i++;
	}
}

int	ft_conversion(t_printf *data)
{
	data->str++;
	
	if (*data->str == 'c')
		ft_char(data);

	if (*data->str == 's')
		ft_str(data);
		
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
