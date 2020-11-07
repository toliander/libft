/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:59:50 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 20:08:45 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *tmp;

	if ((tmp = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
			tmp->content = NULL;
		else
			tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}
