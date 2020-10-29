/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:20:42 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/29 21:44:48 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(char s)
{
    if (s == ' ' || s == '\t' ||s == '\n' ||s == '\v' ||s == '\f' ||s == '\r')
        return(1);
    return(0);
}

int     ft_atoi(const char *str)
{
    const char  *c;
    long         res;
    int         sign;

    sign = 1;
    res = 0;
    c = (char *)str;
    while (ft_isspace(*c))
        c++;
    if (*c == '-' || *c == '+')
    {
       if (*c == '-')
            sign = -1;
        c++;
    }
    while (ft_isdigit(*c))
    { 
		if (res > LONG_MAX/10)
		{
			if (sign == 1)
			    return(-1);
			return(0);
		}
        res = res * 10 + (*c - '0');
        c++;
    }
    return((int)(res*sign));
}
int main()
{
    const char *ss = "6673453453452342344836489";
    printf("%d\n%d", ft_atoi(ss), atoi(ss));
}