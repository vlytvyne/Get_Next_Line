/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 20:38:31 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 20:44:02 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*rev_str;

	i = 0;
	j = 0;
	if (!(rev_str = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		rev_str[j] = str[i];
		i--;
		j++;
	}
	rev_str[j] = '\0';
	return (rev_str);
}
