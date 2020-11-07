/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:54:27 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:12:41 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr (const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == ch)
		return ((char *)str + i);
	return (0);
}