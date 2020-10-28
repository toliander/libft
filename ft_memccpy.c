/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:15:07 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 13:57:51 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *source, int c, size_t n)
{
    unsigned char *des;
    unsigned char *src;
    unsigned char sym;

    des = (unsigned char*)dest;
    src = (unsigned char*)source;
    sym = (unsigned char)c;
    while (n--)
    {
        *des++ = *src++;
        if (*(des-1) == sym)
            return(des);
    }
    return(NULL);
}