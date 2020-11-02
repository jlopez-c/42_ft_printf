/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:25 by jlopez-c          #+#    #+#             */
/*   Updated: 2020/11/02 18:51:29 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/printf.h"
void      ft_state_flags(t_printf *data)
{
    printf("\n\nAqui es por donde voy %c \n", *data->str);
    printf("\n\nEste es mi input %s \n", data->str);
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

void	ft_init(t_printf *data)
{
    data->width = 0;
    data->zero = 0;
    data->minus = 0;
    data->precision = 0;
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
        data->str++;
    }
    while (*data->str == '0')
    {
        data->zero = 1;
        data->str++;
    }
}

void	ft_conversion(t_printf *data)
{
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
}

int	ft_isdigit2(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

void	ft_width(t_printf *data)
{
    if (*data->str == '*' && data->precision == 0)
    {
        data->width = va_arg(data->args, int);
        if (data->width < 0)
        {
            data->width *= -1;
            data->minus = 1;
        }
        data->str++;
    }
    else if (*data->str == '*' && data->precision == 1)
    {
        data->width_prec = va_arg(data->args, int);
        if (data->width_prec < 0)
        {
            //data->width_prec *= -1;
            data->minus = 1;
        }
        data->str++;
    }
    else 
    {
        data->width = ft_atoi(data->str); 

        while (*data->str != '\0' && ft_isdigit2(*data->str))
        { 
            data->str++;
        }         
    }
}

void    ft_precision(t_printf *data)
{
    if (*data->str == '.')
        data->precision = 1;
     data->str++;
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
    if ((*data->str  == '*' || ft_isdigit2(*data->str)) && data->precision == 0)
        ft_width(data);
    if  (*data->str == '.' || data->precision == 1)
        ft_take_precision(data);
    if (*data->str  == '*' && data->precision == 1)
        ft_width(data);
    if (*data->str  == 'c' ||  *data->str  == 's' || *data->str  == 'x' ||
    *data->str  == 'X' || *data->str  == 'd' || *data->str  == 'i' ||
    *data->str  == 'u' || *data->str  == 'p' || *data->str  == '%')
       ft_conversion(data);
}

int		ft_printf(const char *format, ...)
{
    t_printf data;

    va_start(data.args, format);
    data.str = (char *)format;
    data.counter = 0;
    ft_init(&data);
    while (*data.str != '\0')
    {
        if (*data.str == '%')
            ft_options(&data);
        else
            data.counter += write(1, data.str, 1);
        if (*data.str != '\0')
            data.str++;
    }    
    va_end(data.args);
    return (data.counter);
}