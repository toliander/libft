/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:04:25 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 19:36:29 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strstr(const char *strb, const char *stra)
{
	unsigned char	*bstr;
	size_t			lena;
	size_t			i;
	size_t			j;

	bstr = (unsigned char *)strb;
	if (!(lena = ft_strlen(stra)))
		return (bstr);
	i = 0;
	while (bstr[i])
	{
		j = 0;
		while (stra[j] && stra[j] == bstr[i + j])
			j++;
		if (j == lena)
			return (&bstr[i]);
		i++;
	}
	return (NULL);
}
