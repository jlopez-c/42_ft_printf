/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/03 12:22:06 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

int		ft_printf(const char *format, ...)
{
	t_printf data;
	va_start(data.args, format);
	data.str = (char *)format;
	data.counter = 0;
	
	while (*data.str)
	{
		if (*data.str == '%')
			//whatever
			printf("Holi\n");
		else
			data.counter += (1, data.str, 1);
		data.str++;
	}
	va_end(data.args);
	return (data.counter);
}
