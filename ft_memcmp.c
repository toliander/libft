/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:56:53 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 14:10:54 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *src1;
    unsigned char *src2;

    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    while (n--)
    {
        if (*src1 != *src2)
            return(*src1 - *src2);
        src1++;
        src2++;
    }
    return(0);
}