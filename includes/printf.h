/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 11:24:22 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/06/03 11:24:22 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef	struct s_printf	t_printf;

struct	s_printf
{
    char        *str;
	int			counter;
    va_list     args;
	
};

int		ft_printf(const char *format, ...);

#endif