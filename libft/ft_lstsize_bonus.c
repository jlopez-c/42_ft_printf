/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 13:22:57 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/12/16 13:23:02 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		lst_len;

	tmp = lst;
	lst_len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		lst_len++;
	}
	return (lst_len);
}
