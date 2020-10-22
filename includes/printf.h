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
    int         precision;
    //char        to_type;
    int         ar_len;
    int         hex_len;
    int         unsigned_len;
    int         width_prec;
    int         flags2;
    int         repeat;
    va_list     args;
	
}               t_printf;

int	    	ft_printf(const char *format, ...);
void        ft_percent(t_printf *data);
void	    ft_char(t_printf *data);
void	    ft_str(t_printf *data);
void		ft_put_str(t_printf *data, char *str);
void	    ft_digit(t_printf *data);
void	    ft_putnbr_alone(int n, t_printf *data);
void	    ft_unsigned(t_printf *data);
void        ft_putnbr_unsig(unsigned int n, t_printf *data);
void        ft_putnbr_unsig_alone(unsigned int n, t_printf *data);
void	    ft_hexa(t_printf *data);
void	    ft_puthexa(unsigned int x, t_printf *data);
void	    ft_puthexa_alone(unsigned int x, t_printf *data);
void        ft_ptr(t_printf *data);

/* 
** Flags Digit
*/
void        ft_print_zeros(int x, int length, t_printf *data);
void	    ft_print_width(int x, int length, t_printf *data);
void	    ft_print_minus(int x, int length, t_printf *data);
void        ft_print_prec_width(int x, t_printf *data);
void        ft_take_precision(t_printf *data);
void	    ft_normal_and_width_precision(int length, t_printf *data);
void        ft_minus_and_width_precision(int x, int length, t_printf *data);
void        ft_zero_exception(int d, t_printf *data);

/*
** Flags Char
*/
void		ft_print_minus_c(char c, int length, t_printf *data);
void		ft_print_width_c(char c, int length, t_printf *data);

/*
**Flags Str
*/
void	    ft_print_minus_str(char *str, int i, int length, t_printf *data);
void	    ft_print_width_str(char *str, int i, int length, t_printf *data);
void	    ft_print_precision(char *str, int i, t_printf *data);

/*
** Flags Ptr
*/
void        ft_print_width_ptr(int length, t_printf *data);

/*
** Flags Hexa
*/
void	    ft_print_width_hex(unsigned int x, int length, t_printf *data);
void	    ft_print_zeros_hex(unsigned int x, int length, t_printf *data);
void	    ft_print_minus_hex(unsigned int x, int length, t_printf *data);

/*
** Flags Unsigned
*/
void        ft_print_zeros_u(unsigned int x, int length, t_printf *data);
void	    ft_print_width_u(unsigned int x, int length, t_printf *data);
void	    ft_print_minus_u(unsigned int x, int length, t_printf *data);

#endif