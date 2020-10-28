/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:50:17 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:50:24 by jchristi         ###   ########.fr       */
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