/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:00:32 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/07 19:43:43 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncat(char *destination, const char *append, size_t n)
{
	size_t i;

	i = ft_strlen(destination);
	while ((destination[i] = *append++) && n--)
		i++;
	return (destination);
}
