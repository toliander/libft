/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat777.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:37:11 by toliander         #+#    #+#             */
/*   Updated: 2020/10/20 21:07:02 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	i = 0;
	if (dstlen < size - 1 && size > 0)
	{
		while (src[i] && dstlen + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + srclen);
}