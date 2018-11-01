/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:06:52 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/24 14:07:46 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uns_s1;
	unsigned char	*uns_s2;

	uns_s1 = (unsigned char*)s1;
	uns_s2 = (unsigned char*)s2;
	i = 0;
	while (uns_s1[i] && uns_s2[i] && i < n && uns_s1[i] - uns_s2[i] == 0)
		i++;
	if (i == n)
		i--;
	return (uns_s1[i] - uns_s2[i]);
}
