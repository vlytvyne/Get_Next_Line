/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:26:01 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 16:26:42 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int words;
	int	word_started;

	words = 0;
	word_started = 0;
	while (*s)
	{
		if (*s != c && !word_started)
		{
			words++;
			word_started = 1;
		}
		if (*s == c)
			word_started = 0;
		s++;
	}
	return (words);
}

static char	*create_str(char **s, char c)
{
	char	*word;
	char	*ch_occurence;
	int		size;
	int		i;

	i = 0;
	ch_occurence = ft_strchr(*s, c);
	if (ch_occurence == 0)
		size = (int)ft_strlen(*s);
	else
		size = (int)(ch_occurence - *s);
	if (!(word = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		word[i] = **s;
		(*s)++;
		i++;
	}
	(*s)--;
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**words;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(words = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			words[i] = create_str((char**)&s, c);
			i++;
		}
		s++;
	}
	words[i] = 0;
	return (words);
}
