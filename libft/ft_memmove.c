/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:24:56 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:25:01 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	if (ptr_src == NULL && ptr_src == ptr_dst)
		return (dst);
	if (ptr_src < ptr_dst)
		while (i < len)
		{
			i++;
			ptr_dst[len - i] = ptr_src[len - i];
		}
	else
		while (len > 0)
		{
			*(ptr_dst) = *(ptr_src);
			ptr_dst++;
			ptr_src++;
			len--;
		}
	return (dst);
}
