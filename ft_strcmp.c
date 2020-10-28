/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 22:56:17 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 23:06:03 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strcmp (const char *str1, const char *str2)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t        i;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}