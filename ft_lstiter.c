/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:21:35 by toliander         #+#    #+#             */
/*   Updated: 2020/10/30 23:24:42 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{

	if (lst && f)
	{
	    while (lst)
	    {
	    	f(lst->content);
	    	lst = lst->next;
	    }
    }
	//if (!lst || !f)
	//	return ;
	//while (lst)
	//{
	//	f(lst->content);
	//	lst = lst->next;
	//}
    // но я не уверен что return вообще имеет место быть т.к. функция как бы войд в общем я даун помогите
}