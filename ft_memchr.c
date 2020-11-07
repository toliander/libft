/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:50:17 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:03:28 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    unsigned char sym;

    src = (unsigned char *)s;
    sym = (unsigned char)c;

    while (n--)
    {
        if (*src == sym)
            return(src);
        else
            src++;
    }
    return(NULL);
}