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
    int         width;
    int         zero;
    int         minus;
    char        to_type;
    int         ar_len; //longitud de mi argumento.
    va_list     args;
	
}               t_printf;

int	    	ft_printf(const char *format, ...);
void        ft_percent(t_printf *data);
void	    ft_char(t_printf *data);
void	    ft_str(t_printf *data);
void	    ft_digit(t_printf *data);
void	    ft_unsigned(t_printf *data);
void	    ft_hexa(t_printf *data);
void        ft_ptr(t_printf *data);

#endif