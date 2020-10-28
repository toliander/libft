/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:40:45 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 18:57:42 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcpy (char *destination, const char *source)
{
    unsigned char *dst;
    unsigned char *src;

    dst = (unsigned char *)destination;
    src = (unsigned char *)source;
    while (src)
        *dst++ = *src++;
    *dst = '\0';
    return (dst);
}