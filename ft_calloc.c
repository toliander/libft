/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:21:44 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 13:40:17 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *calloc(size_t number, size_t size)
{
	void *des;

    des = malloc(number * sizeof(size));
	if (des != NULL)
		ft_bzero(des, size * number);
	return (des);
}