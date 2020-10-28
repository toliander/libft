/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc777.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:55:48 by toliander         #+#    #+#             */
/*   Updated: 2020/10/21 18:57:38 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *des;

    des = malloc(size);
	if (des != NULL)
		ft_bzero(des, size);
	return (des);
}