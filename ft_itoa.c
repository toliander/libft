/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:17:02 by toliander         #+#    #+#             */
/*   Updated: 2020/11/07 23:22:01 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenst(int n)
{
	size_t len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	int			buf;
	int			flag;
	long int	nums;

	nums = n;
	len = lenst(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	flag = (n < 0) ? -1 : 1;
	while (len--)
	{
		buf = (n < 0) ? -nums % 10 : nums % 10;
		str[len] = buf + '0';
		nums = nums / 10;
	}
	if (flag == -1)
		str[0] = '-';
	return (str);
}
