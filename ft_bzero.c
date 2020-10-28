/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:09:35 by toliander         #+#    #+#             */
/*   Updated: 2020/10/18 17:30:08 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    unsigned char *des;

    des = (unsigned char*)s;
    while (n != 0)
    {
        *des = '\0';
        des++;
        n--;
    }
}