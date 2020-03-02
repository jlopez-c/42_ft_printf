/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:30:42 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:30:46 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s;
	size_t	nlen;

	s = (char*)haystack;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return (s);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (*s && len > 0 && len >= nlen)
	{
		if (ft_strncmp(s, needle, nlen) == 0)
		{
			return (s);
		}
		s++;
		len--;
	}
	return (NULL);
}
