/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:42:09 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 22:50:37 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strstr(const char *strB, const char *strA)
{
    unsigned char *bstr;
    size_t lenA;
    size_t i;
    size_t j;
    
    bstr = (unsigned char *)strB;
    if (!(lenA = ft_strlen(strA)))
        return (bstr);
    i = 0;
    while (bstr[i])
    {
        j = 0;
        while (strA[j] && strA[j] == bstr[i + j])
            j++;
        if (j == lenA)
            return (&bstr[i]);
        i++;
    }
    return (NULL);
}