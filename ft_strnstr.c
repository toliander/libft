/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:25:47 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 12:21:02 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	size_t	needle_len;
	size_t	j;
	size_t	i;

	h = (char *)haystack;
	if (!(needle_len = ft_strlen(needle)))
		return (h);
	if (ft_strlen(haystack) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (h[i] && i <= len - needle_len)
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j])
			j++;
		if (j == needle_len)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
