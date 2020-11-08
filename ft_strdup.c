/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:57:18 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/08 01:05:04 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *a;
	char *b;

	if (!(a = (char*)malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	b = a;
	while (*str)
	{
		*a++ = *str++;
	}
	*a = '\0';
	return (b);
}
