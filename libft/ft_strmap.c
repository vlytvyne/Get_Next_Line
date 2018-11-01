/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:25:16 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 13:37:02 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*applied_str;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(applied_str = (char*)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	while (s[i])
	{
		applied_str[i] = f(s[i]);
		i++;
	}
	applied_str[i] = '\0';
	return (applied_str);
}
