/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:03:10 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 13:04:05 by jchristi         ###   ########.fr       */
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