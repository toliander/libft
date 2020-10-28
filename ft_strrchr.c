/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:28:47 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 21:40:15 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr (const char *str, int ch)
{
    unsigned char *s;
    unsigned char c;

    c = (unsigned char)ch;
    s = (unsigned char *)str + ft_strlen(str);

    while (s >= str)
    {
        if (*s == c)
            return (s);
        s--;
    }
    return (NULL); 
}
