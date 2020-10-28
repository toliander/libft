/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:44:35 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:44:47 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    if (ft_isalpha(c)==1 || ft_isdigit(c) == 1)
        return(1);
    else
        return(0);
}