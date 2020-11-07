/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:03:10 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:18:56 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr (const char *str, int ch)
{
    char *s;
    char c;

    c = (char)ch;
    s = (char *)str + ft_strlen(str);

    while (s >= str)
    {
        if (*s == c)
            return (s);
        s--;
    }
    return (NULL); 
}