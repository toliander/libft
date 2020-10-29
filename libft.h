/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:03:05 by jchristi          #+#    #+#             */
/*   Updated: 2020/10/29 20:31:35 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

size_t ft_strlen(const char *s);

int		ft_isdigit(int c);

char	*ft_strnew(size_t size);

void ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;