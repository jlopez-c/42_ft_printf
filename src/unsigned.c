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
	int count;
    unsigned long int max;
    unsigned long int suma;
	int cnt;

	x = n;
    max = 4294967296;
	if (n < 0)
	{
       suma = max + x;
		if (suma >= 10)
		{
			ft_putnbr_unsig((suma / 10), fd, data);
		}
		cnt = ((suma % 10) + '0');
		data->counter += write(1, &cnt, 1);
		return;
	}
	if (x >= 10)
	{
		ft_putnbr_unsig((x / 10), fd, data);
	}
	count = ((x % 10) + '0');
	data->counter += write(1, &count, 1);
}