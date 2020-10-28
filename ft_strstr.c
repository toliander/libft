/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:04:25 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 13:04:35 by jchristi         ###   ########.fr       */
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