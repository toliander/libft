/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:17:02 by toliander         #+#    #+#             */
/*   Updated: 2020/10/29 21:44:54 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t lenst(int n)
{
	size_t len;
	
	len = 0;
	if (n == 0)
	  return(1);
	if (n<0)
	{
		len++;
		n = n * (-1);
	}
	while (n != 0)
  {
  	n = n/10;
	len += 1;
  }
  return(len);
}
char *ft_itoa(int n)
{
  char *str;
  size_t len;

  len = lenst(n);
  if(!(str = ft_strnew(len)))
		return(NULL);
  if (n<0)
	n = n*(-1);
  if(n == 0)
  {
	str[0] = '0';
	return(str);
  }
  while(len--)
  {
	  	if(n == 0)
		  str[0] = '-';
		else
		  str[len] = n%10 + '0';
		  n = n /10;
  }
  return (str);  
}

int main()
{
    int n = -9765965;
	printf("%s\n", ft_itoa(n));
	return(0);
}