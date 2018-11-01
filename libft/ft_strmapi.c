/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:39:21 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 13:44:01 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*applied_str;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(applied_str = (char*)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	while (s[i])
	{
		applied_str[i] = f(i, s[i]);
		i++;
	}
	applied_str[i] = '\0';
	return (applied_str);
}
