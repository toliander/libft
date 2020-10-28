/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:08:30 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 21:27:31 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr (const char *str, int ch)
{
    unsigned char *s;
    unsigned char c;

    c = (unsigned char)ch;
    s = (unsigned char *)str;

    while((*s != c) && *s)
        s++;
    if (*s == c)
        return (s);
    else
        return (NULL);
      
}