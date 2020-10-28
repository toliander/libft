/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:16:14 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 18:55:33 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    unsigned char *a;
    
    if (!str)
        return(NULL);
    a = (unsigned char*)malloc((ft_strlen(str)+1) * sizeof(unsigned char));
    while(str)
    {
        *a++ = *str++;
    }
    *a = '\0';
    return (a);
}