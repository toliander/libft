/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:54:27 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:54:37 by jchristi         ###   ########.fr       */
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