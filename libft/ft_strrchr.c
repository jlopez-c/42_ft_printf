/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:31:49 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:31:54 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*str;
	size_t	i;
	size_t	count;
	size_t	len;

	count = 0;
	i = 0;
	len = ft_strlen(s);
	str = (char*)s;
	while (i <= len)
	{
		if (str[i] == (char)c)
		{
			res = &str[i];
			count++;
		}
		i++;
	}
	if (count != 0)
		return (res);
	return (NULL);
}
