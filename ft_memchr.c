/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:37:43 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 13:57:58 by toliander        ###   ########.fr       */
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
        if (*src == c)
            return(src);
        else
            src++;
    }
    return(NULL);
}