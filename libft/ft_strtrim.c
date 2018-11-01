/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:43:28 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 15:09:22 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_size(char const **s)
{
	int		size;
	char	*start;
	char	*str;

	str = (char*)*s;
	size = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	start = str;
	while (*str)
	{
		str++;
		size++;
	}
	str--;
	if (size == 0)
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		str--;
		size--;
	}
	*s = start;
	return (size);
}

char		*ft_strtrim(char const *s)
{
	int		size;
	char	*tr_str;
	int		i;

	i = 0;
	if (s == 0)
		return (0);
	size = count_size(&s);
	if (!(tr_str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		tr_str[i] = *s;
		i++;
		s++;
	}
	tr_str[i] = '\0';
	return (tr_str);
}
