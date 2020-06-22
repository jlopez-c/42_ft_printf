/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:25:57 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:26:01 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/printf.h"

void	ft_putnbr_fd(int n, int fd, t_printf *data)
{
	int	x;
	int count;

	x = n;
	if (n < 0)
	{
		data->counter += write(1, "-", 1);
		if (n == -2147483648)
		{
			data->counter += write(1, "2", 1);
			x = -147483648;
		}
		x = -1 * x;
	}
	if (x >= 10)
	{
		ft_putnbr_fd((x / 10), fd, data);
	}
	count = (x % 10) + 48;
	data->counter += write(1, &count, 1);
}



