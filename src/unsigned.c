/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 18:49:13 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/08 18:49:13 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

/*
void	ft_length_unsigned(int u, t_printf *data)
{
	unsigned long int suma;

	suma = 4294967296 + u;
		if (suma >= 10)
		{
			ft_length_unsigned((suma / 10), data);
			suma = suma % 10;
		}
	//suma = ((suma % 10) + '0');
	data->unsigned_len++;
}
*/
void	ft_putnbr_unsig_alone(int n, t_printf *data)
{
	unsigned long int 	max;
	unsigned long int 	suma;
	int					count;

	max = 4294967296;
	if (n < 0)
	{
       suma = max + n;
		if (suma >= 10)
		{
			ft_putnbr_unsig_alone((suma / 10), data);
		}
		suma = ((suma % 10) + '0');
		data->counter += write(1, &suma, 1);
		return;
	}
	if (n >= 10)
	{
		ft_putnbr_unsig_alone((n / 10), data);
	}
	count = ((n % 10) + '0');
	data->counter += write(1, &count, 1);
}

void	ft_putnbr_unsig(int n, t_printf *data)
{
	int length;
    
	length = data->width - data->ar_len;
		//Este parrafo me imprime los zeros
		if ((data->zero == 1 || data->precision == 1) && data->minus == 0)
			ft_print_zeros_u(n, length, data);
		//Este parrafor me imprime los espacios
		else if (data->zero == 0 && data->width > 0 && data->minus == 0)
			ft_print_width_u(n, length, data);
		//Este parrafo maneja los menos
		else if (data->minus == 1 && data->width > 0 && (data->zero == 0 || data->zero == 1))
			ft_print_minus_u(n, length, data);
		else
			ft_putnbr_unsig_alone(n, data);
}

void	ft_unsigned(t_printf *data)
{
	int 	u;

	u = va_arg(data->args, int);
	//if (u < 0)
	//	ft_length_unsigned(u, data);
	//else
	data->ar_len = ft_strlen(ft_itoa(u));

	//printf("%d\n", data->ar_len);
	ft_putnbr_unsig(u, data);
}