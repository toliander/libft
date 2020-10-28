/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:58:37 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 19:16:36 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strncpy (char *destination, const char *source, size_t n)
{
	size_t i;

	i = 0;
	while (source[i] && i < n)
	{
		destination[i] = source[i];
		i++;
	}
	while (i < n)
		destination[i++] = '\0';
	return (destination);
}