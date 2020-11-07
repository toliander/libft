/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toliander <toliander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:29:12 by toliander         #+#    #+#             */
/*   Updated: 2020/11/07 12:44:04 by toliander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

static size_t	countwords(char const *str, char c)
{
	size_t count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static char		*takeword(char *word, char c)
{
	char *dup;

	dup = word;
	while (*word && *word != c)
		word++;
	*word = '\0';
	return (ft_strdup(dup));
}

static void		freewords(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
}

static char		**takeallwords(char *s, char c, size_t words_count)
{
	char	**words;
	char	*word;
	size_t	i;

	i = 0;
	if ((words = (char **)ft_memalloc(sizeof(char *) * (words_count + 1))))
	{
		while (i < words_count)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(word = takeword(s, c)))
				{
					freewords(words, i);
					return (NULL);
				}
				words[i++] = word;
				s += (ft_strlen(word) + 1);
			}
		}
		words[i] = NULL;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	char	*line;

	if (!s || !(line = ft_strdup((char *)s)))
		return (NULL);
	words = takeallwords(line, c, countwords(line, c));
	free(line);
	return (words);
}