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

void	ft_putnbr_unsig(int n, int fd, t_printf *data)
{
	int	x;
    unsigned long int max;
    unsigned long int suma;

	x = n;
    max = 4294967296;
	if (n < 0)
	{
       suma = max + x;
		if (suma >= 10)
		{
			ft_putnbr_unsig((suma / 10), fd, data);
		}
		suma = ((suma % 10) + '0');
		data->counter += write(1, &suma, 1);
		return;
	}
	if (x >= 10)
		ft_putnbr_unsig((x / 10), fd, data);
	x = ((x % 10) + '0');
	data->counter += write(fd, &x, 1);
}

void	ft_unsigned(t_printf *data)
{
	int 	u;

	u = va_arg(data->args, int);
	ft_putnbr_unsig(u, 1, data);
}