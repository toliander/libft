/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:57:18 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:21:36 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *a;
    
    if (!str)
        return(NULL);
    a = (char*)malloc((ft_strlen(str)+1) * sizeof(char));
    while(str)
    {
        *a++ = *str++;
    }
    *a = '\0';
    return (a);
}