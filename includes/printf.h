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
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"


typedef struct	s_printf
{
    char        *str;
	int			counter;
    //char        *result;
    va_list     args;
	
}               t_printf;

int	    	ft_printf(const char *format, ...);
void	    ft_conversion(t_printf *data);
void    	ft_putnbr_unsig(int n, int fd, t_printf *data);

#endif