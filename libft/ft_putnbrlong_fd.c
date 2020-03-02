/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlong_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:03:04 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/03/01 22:03:17 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrlong_fd(long int number, int fd)
{
	if (number == -9223372036854775807 - 1)
		write(1, "-9223372036854775808", 20);
	else
	{
		if (number < 0)
		{
			ft_putchar_fd('-', fd);
			number *= -1;
		}
		if (number > 9)
			ft_putnbrlong_fd(number / 10, fd);
		ft_putchar_fd((number % 10) + '0', fd);
	}
}
