/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/10/25 19:29:54 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"

void	ft_init(t_printf *data)
{
    data->width = 0;
    data->zero = 0;
    data->minus = 0;
    data->precision = 0;
    //data->to_type = ' ';
    data->ar_len = 0;
    data->hex_len = 0;
    data->unsigned_len = 0;
    data->width_prec = 0;
    data->flags2 = 0;
    data->repeat = 0;
}

void	ft_flags(t_printf *data)
{
    if (*data->str == '-')
    {
        data->minus = 1;
        //data->to_type = ' ';
        //x->flags2 = 1;
        data->str++;
    }
    if (*data->str == '0')
    {
        data->zero = 1;
        //data->to_type = '0';
        //x->flags2 = -1;
        data->str++;
    }
}

void	ft_conversion(t_printf *data)
{
    //data->str++;
    if (*data->str == 'c')
        ft_char(data);
    else if (*data->str == 's')
        ft_str(data);
    else if (*data->str == 'p')
        ft_ptr(data);
    else if (*data->str == 'd' || *data->str == 'i')
        ft_digit(data);
    else if (*data->str == 'u')
        ft_unsigned(data);
    else if (*data->str == 'x' || *data->str == 'X')
        ft_hexa(data);
    else if (*data->str == '%')
        ft_percent(data);
    else
        NULL ;
}

void	ft_width(t_printf *data)
{
    if (*data->str == '*')
    {
        data->width = va_arg(data->args, int);
        if (data->width < 0)
        {
            data->width *= -1;
            data->minus = 1;
            //x->flags2 = 1;
            //data->to_type = ' ';
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

void    ft_precision(t_printf *data)
{
    if (*data->str == '.')
    {
        data->precision = 1;
        data->str++;
    }
}

void	ft_options(t_printf *data)
{
    data->str++;
    data->repeat = 1;
    
    if (*data->str  == '0')
        ft_flags(data);
    if (*data->str == '-')
        ft_flags(data);
    if (*data->str  == '.')
    	ft_precision(data);
    if ((*data->str  == '*' || ft_isdigit(*data->str)) && data->precision == 0 )
        ft_width(data);
    if  (*data->str == '.' || data->precision == 1)
        ft_take_precision(data);
    if (*data->str  != '\0')        // conseguir o controlar que no se meta a ft conversion unicamente si no ha llegado al finall, puede haber espacios u otro tipo de chars
        ft_conversion(data);
}

void      ft_state_flags(t_printf *data)
{
   // printf("\n\nEsto es el estado de counter %s \n", data->str);
	printf("\n\nEsto es el estado de counter %d \n", data->counter);			
    printf("Esto es el estado de width %d \n", data->width);
    printf("Esto es el estado de zero %d \n", data->zero);
    printf("Esto es el estado de minus %d \n", data->minus);
    printf("Esto es el estado de precision %d \n ", data->precision);
    printf("Esto es el estado de ar_len %d \n", data->ar_len);
    printf("Esto es el estado de hex_len %d \n", data->hex_len);
    printf("Esto es el estado de unsigned_len %d \n", data->unsigned_len);
    printf("Esto es el estado de width_prec %d \n", data->width_prec);
    printf("Esto es el estado de flags2 %d \n", data->flags2);
  //  printf("Esto es el estado de repeat %d \n\n\n", data->repeat);
}

int		ft_printf(const char *format, ...)
{
    t_printf data;

    va_start(data.args, format);
    data.str = (char *)format;
    data.counter = 0;
    ft_init(&data);
    while (*data.str)
    {
        if (*data.str == '%')
            ft_options(&data);
      //  else if ((*data.str == '0' || *data.str == '*' || *data.str == '.' ||
     //   *data.str == '-' || ft_isdigit(*data.str)) && data.repeat == 1)
     //       ft_options(&data);
        else
            data.counter += write(1, data.str, 1);
        //ft_state_flags(&data);
        data.str++;
    }
    //ft_state_flags(&data);
    va_end(data.args);
    return (data.counter);
}