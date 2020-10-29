/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:35:42 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/29 20:18:11 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if ((sub = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		while (s1)
			sub[i++] = *s1;
		while (s2)
			sub[i++] = *s2;
		sub[i] = '\0';
	}
	return (sub);
}
