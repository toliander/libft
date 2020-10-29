/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:35:47 by toliander         #+#    #+#             */
/*   Updated: 2020/10/29 22:46:24 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    while(*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}

int main()
{
    char *s;
    int n;
    
    s = "bullshit";
    n = 1;
    ft_putstr_fd(s, n);
    return(0);
}