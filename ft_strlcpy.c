/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:41:06 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:20:23 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *s);

size_t ft_strlcpy(char *destination, const char *source, size_t size)
{
    unsigned char *dst;
    unsigned char *src;
    size_t        n;

    dst = (unsigned char *)destination;
    src = (unsigned char *)source;
    if (size == 0)
        return(ft_strlen(source));
    n = size - 1;
    if (!dst || !src)
        return(0);
    while (src && n--)
        *dst++ = *src++;
    *dst = '\0';
    return (ft_strlen(source));
}
