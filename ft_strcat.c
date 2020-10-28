/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:17:00 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 19:26:23 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcat (char *destination, const char *append)
{
    size_t i;

    i = ft_strlen(destination);
    while ((destination[i] = *append++))
        i++;
    return (destination);
}