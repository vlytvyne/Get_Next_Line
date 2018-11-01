/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:32:08 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 14:41:26 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	int		i;
	char	*joined_str;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	if (!(joined_str = (char*)malloc(sizeof(char) * size)))
		return (0);
	while (*s1)
	{
		joined_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		joined_str[i] = *s2;
		i++;
		s2++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
