/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:31:20 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 13:58:11 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *source, size_t n)
{
    unsigned char *des;
    unsigned char *src;

    des = (unsigned char *)dest;
    src = (unsigned char *)source;
    if (des < src)
        while (n--)
            *des++ = *src++;
    else
    {
        des += n;
        src += n;
        while (n--)
            *--des = *--src;
    }
    return(des);
}