/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:17:02 by toliander         #+#    #+#             */
/*   Updated: 2020/10/29 23:59:37 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t lenst(int n)
{
	size_t len;
	
	len = 1;
	if (n<0)
		len++;
	while (n/10 != 0)
  {
  	n = n/10;
	len ++;
  }
  return(len);
}

char *ft_itoa(int n)
{
  char *str;
  size_t len;
  int	buf;
  int	flag;

  len = lenst(n);
  if(!(str = ft_strnew(len)))
		return(NULL);
  flag = (n < 0) ? -1 : 1;
  while(len--)
  {
	buf = (n < 0) ? -n%10 : n%10;
	str[len] = buf + '0';
	n = n /10;
  }
  if (flag == -1)
	str[0] = '-';
  return (str);  
}

int main()
{
    int n = -788;
	printf("%s\n", ft_itoa(n));
	return(0);
}