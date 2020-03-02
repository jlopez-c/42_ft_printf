/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:30:28 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:30:34 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*ptr_s1 && *ptr_s1 == *ptr_s2)
		{
			ptr_s1++;
			ptr_s2++;
		}
		else
		{
			return (*ptr_s1 - *ptr_s2);
		}
		n--;
	}
	return (0);
}
