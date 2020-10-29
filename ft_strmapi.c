/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:25:53 by toliander         #+#    #+#             */
/*   Updated: 2020/10/29 22:34:20 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *res;
    size_t  i;

    if(!(res = ft_strnew(ft_strlen(s))) || !s || !f)
        return(NULL);
    i = 0;
    while(s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    return (res);
}