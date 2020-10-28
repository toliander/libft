/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:53:30 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:53:37 by jchristi         ###   ########.fr       */
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