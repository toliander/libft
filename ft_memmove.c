/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:52:11 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/08 02:02:24 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char *des;
	unsigned char *src;

	des = (unsigned char *)dest;
	src = (unsigned char *)source;
	if (!dest && !source)
		return (NULL);
	if (des < src)
		while (n--)
			*des++ = *src++;
	else
	{
		des += n;
		src += n;
		while (n--)
			*--des = *--src;
	}
	return (dest);
}
