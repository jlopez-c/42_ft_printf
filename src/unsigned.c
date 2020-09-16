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

void	ft_putnbr_unsig(int n, t_printf *data)
{
	int	x;
    unsigned long int max;
    unsigned long int suma;

	x = n;
    max = 4294967296;
	if (x < 0)
	{
       suma = max + x;
		if (suma >= 10)
		{
			ft_putnbr_unsig((suma / 10), data);
		}
		suma = ((suma % 10) + '0');
		data->counter += write(1, &suma, 1);
		return;
	}
	if (x >= 10)
		ft_putnbr_unsig((x / 10), data);
	x = ((x % 10) + '0');
	data->counter += write(1, &x, 1);
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