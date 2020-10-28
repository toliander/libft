/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:41:06 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/28 18:24:57 by jchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *s);

size_t ft_strlcpy(char *destination, const char *source, size_t size)
{
    unsigned char *dst;
    unsigned char *src;
    size_t        n;

    dst = (unsigned char *)destination;
    src = (unsigned char *)source;
    if (size == 0)
        return(ft_strlen(source));
    n = size - 1;
    if (!dst || !src)
        return(0);
    while (src && n--)
        *dst++ = *src++;
    *dst = '\0';
    return (ft_strlen(source));
}

int main()
{
    char *dst;
    char *dst2;
    char *src;
    size_t a;
    size_t b;

    dst = malloc(5);
    dst2 = malloc(5);
    src = "Hello World";
    a = ft_strlcpy(dst, src, 10);
    b = strlcpy(dst2, src, 10);
    printf("%s\n", dst);
    printf("%s\n", dst2);
    printf("%zu\n%zu\n", a, b);
    free(dst);
    free(dst2);
    return (0);
}