/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 23:06:29 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 23:08:46 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t        i;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    while ((s1[i] || s2[i]) && n--)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}