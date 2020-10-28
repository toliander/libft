/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:52:42 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:52:48 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//destination – указатель на заполняемый массив
//с – код символа для заполнения
// n – размер заполняемой части массива в байтах
void *ft_memset (void *destination, int c, size_t n) 
{
    unsigned char *des;
    unsigned char sym;

    des = (unsigned char*)destination;
    sym = (unsigned char)c;
    while (n != 0)
    {
        *des = sym;
        des++;
        n--;
    }
    return(destination);
}