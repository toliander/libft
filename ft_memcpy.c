/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:15:48 by toliander         #+#    #+#             */
/*   Updated: 2020/10/18 17:30:30 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t n)
{
    unsigned char *des;
    unsigned char *src;
    unsigned char sym;

    des = (unsigned char*)dest;
    src = (unsigned char*)source;
    while (n --)
    {
        sym = *src;
        *des = sym;
        des++;
        src++;
    }
    return(dest);
}