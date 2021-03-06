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
void	ft_putnbr_unsig_alone(unsigned int n, t_printf *data)
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

void	ft_putnbr_unsig(unsigned int n, t_printf *data)
{
	int length;
    
	length = data->width - data->ar_len;
		//printf("HOLA este es el length11111 %d", length);
		//Este parrafo me imprime los zeros
		if (data->zero == 1 && data->minus == 0 && data->width_prec == 0 && n != 0)
			ft_print_zeros_u(n, length, data);
		//Este parrafor me imprime los espacios
		else if (data->zero == 0 && data->width > 0 && data->minus == 0 && data->precision == 0)
			ft_print_width_u(n, length, data);
		//Este parrafo maneja los menos
		else if (data->minus == 1 && data->width > 0 && (data->zero == 0 || data->zero == 1) && data->precision == 0)
			ft_print_minus_u(n, length, data);
		else if (data->width >= 0 && data->width_prec > 0)
			ft_print_prec_width_u(n, data);
		else if (n == 0 && data->zero == 1 && data->width == 0 && data->flags2 == -3)
			data->counter += write(1, "0", 1);
		else if (n == 0 && (data->precision == 1 || data->zero == 1) && data->width_prec == 0)
			ft_zero_exception_u(n, data);
		else
			ft_putnbr_unsig_alone(n, data);
	ft_init(data);
}

void	ft_unsigned(t_printf *data)
{
	int 	u;

	u = va_arg(data->args, unsigned int);
	//if (u < 0)
	//	ft_length_unsigned(u, data);
	//else
	data->ar_len = ft_strlen(ft_itoa(u));

	if (u < 0 && data->precision == 1 && data->width_prec == 0)
		data->ar_len--;
	/*
	if (u < 0 && (data->zero == 1 || data->precision == 1) && data->width_prec == 0)
	{
		data->counter += write(1, "-", 1);
		u = -1 * u;
	}
	*/
	if (u < 0 && data->precision == 1 && data->width_prec > 0)
	{
		u = -1 * u;
		//Activo data->flags2 cuando el  numero es negativo y hay width y precision
		data->flags2 = 1;
	}
	ft_putnbr_unsig(u, data);
}