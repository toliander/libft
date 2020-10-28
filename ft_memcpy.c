/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:51:20 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 12:51:28 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *source, size_t n)
{
    unsigned char *des;
    unsigned char *src;
    unsigned char sym;

    des = (unsigned char*)dest;
    src = (unsigned char*)source;
    while (n --)
    {
        sym = *src;
        *des = sym;
        des++;
        src++;
    }
    return(dest);
}