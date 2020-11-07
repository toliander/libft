/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:52:42 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 20:03:39 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char *des;
	unsigned char sym;

	des = (unsigned char*)destination;
	sym = (unsigned char)c;
	while (n != 0)
	{
		*des = sym;
		des++;
		n--;
	}
	return (destination);
}
