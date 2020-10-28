/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:57:18 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 20:31:16 by jchristi         ###   ########.fr       */
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