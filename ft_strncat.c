/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:27:17 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 19:33:49 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strncat (char *destination, const char *append, size_t n)
{
        size_t i;

    i = ft_strlen(destination);
    while ((destination[i] = *append++) && n--)
        i++;
    return (destination);
}