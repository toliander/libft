/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:16:26 by toliander         #+#    #+#             */
/*   Updated: 2020/10/30 23:19:08 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *todel;
	t_list *toswap;

	todel = *lst;
	while (todel)
	{
		toswap = todel->next;
		ft_lstdelone(todel, del);
		todel = toswap;
	}
	*lst = NULL;
}