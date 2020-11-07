/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:49:19 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 20:07:43 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned char *des;
	unsigned char *src;
	unsigned char sym;

	des = (unsigned char*)dest;
	src = (unsigned char*)source;
	sym = (unsigned char)c;
	while (n--)
	{
		*des++ = *src++;
		if (*(des - 1) == sym)
			return (des);
	}
	return (NULL);
}
