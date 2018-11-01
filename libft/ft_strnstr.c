/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:18:53 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/24 14:21:43 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t j_temp;

	i = 0;
	j = 0;
	j_temp = 0;
	while (haystack[j] && needle[i] && j < len)
	{
		i = 0;
		j = j_temp;
		while (haystack[j] != needle[0] && haystack[j] && j < len)
			j++;
		j_temp = j + 1;
		while (haystack[j] == needle[i] && haystack[j] && needle[i] && j < len)
		{
			j++;
			i++;
		}
	}
	if (needle[i] == '\0')
		return ((char*)(haystack + j - i));
	return (0);
}
