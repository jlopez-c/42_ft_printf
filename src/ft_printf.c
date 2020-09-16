/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/09/06 08:48:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_init(t_printf *data)
{
    data->counter = 0;
    data->width = 0;
    data->zero = 0;
    data->minus = 0;
    data->to_type = ' ';
    data->ar_len = 0;
    data->hex_len = 0;
    data->unsigned_len = 0;
}

void	ft_flags(t_printf *data)
{
    if (*data->str == '-')
    {
        data->minus = 1;
        data->to_type = ' ';
        //x->flags2 = 1;
        data->str++;
    }
    else if (*data->str == '0')
    {
        data->zero = 1;
        data->to_type = '0';
        //x->flags2 = -1;
        data->str++;
    }
}

void	ft_conversion(t_printf *data)
{
    //data->str++;
    if (*data->str == 'c')
        ft_char(data);
    if (*data->str == 's')
        ft_str(data);
    if (*data->str == 'p')
        ft_ptr(data);
    if (*data->str == 'd' || *data->str == 'i')
        ft_digit(data);
    if (*data->str == 'u')
        ft_unsigned(data);
    if (*data->str == 'x' || *data->str == 'X')
        ft_hexa(data);
    if (*data->str == '%')
        ft_percent(data);
}

void	ft_width(t_printf *data)
{
    if (*data->str == '*')
    {
        data->width = va_arg(data->args, int);
        if (data->width < 0)
        {
            data->width *= -1;
            //x->flags2 = 1;
            data->to_type = ' ';
        }
        data->str++;
    }
    else 
    {
        data->width = ft_atoi(data->str);
        while (ft_isdigit(*data->str))
            data->str++;	
    }
}

void	ft_options(t_printf *data)
{
    data->str++;
    if (*data->str  == '-' || *data->str  == '0')
        ft_flags(data);
    if (*data->str  == '*' || (ft_isdigit(*data->str) ))
        ft_width(data);
    //if (*data->str  == '.')
    //	ft_precision(x);
    if (*data->str  != '\0')
        ft_conversion(data);
}

int		ft_printf(const char *format, ...)
{
    t_printf data;

    va_start(data.args, format);
    data.str = (char *)format;
    ft_init(&data);
    while (*data.str)
    {
        if (*data.str == '%')
            ft_options(&data);
        else
            data.counter += write(1, data.str, 1);
        data.str++;
    }
    va_end(data.args);
    return (data.counter);
}