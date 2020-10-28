/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:56:44 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 22:09:12 by jchristi         ###   ########.fr       */
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