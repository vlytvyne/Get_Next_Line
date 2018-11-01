/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:46:08 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/24 14:46:09 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int j_temp;

	i = 0;
	j = 0;
	j_temp = 0;
	while (haystack[j] && needle[i])
	{
		i = 0;
		j = j_temp;
		while (haystack[j] != needle[0] && haystack[j])
			j++;
		j_temp = j + 1;
		while (haystack[j] == needle[i] && haystack[j] && needle[i])
		{
			j++;
			i++;
		}
	}
	if (needle[i] == '\0')
		return ((char*)(haystack + j - i));
	return (0);
}
