/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:58:41 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/08/31 19:24:19 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void		ft_char(t_printf *data)
{
	char c;

	c = (char)va_arg(data->args, int);
	data->counter += write(1, &c, 1);
}

void		ft_str(t_printf *data)
{
	int		i;
	char	*str;

	str = va_arg(data->args, char *);
	i = 0;
	while (str[i])
	{
		data->counter += write(1, str + i, 1);
		i++;
	}
}
