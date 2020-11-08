/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:20:42 by jchristi          #+#    #+#             */
/*   Updated: 2020/11/08 02:40:40 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n'
	|| s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	const char	*c;
	long		res;
	int			sign;

	res = 0;
	c = (char *)str;
	while (ft_isspace(*c))
		c++;
	sign = (*c == '-') ? -1 : 1;
	if (*c == '-' || *c == '+')
		c++;
	while (ft_isdigit(*c))
	{
		if (res > LONG_MAX / 10)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		res = res * 10 + (*c - '0');
		c++;
	}
	return ((int)(res * sign));
}
