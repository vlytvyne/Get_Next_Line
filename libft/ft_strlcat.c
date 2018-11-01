/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:04:10 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/25 13:05:34 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dstlen;
	int srclen;
	int i;

	i = 0;
	dstlen = (int)ft_strlen(dst);
	srclen = (int)ft_strlen(src);
	while (dst[i] && i < (int)dstsize - 1)
		i++;
	if (dst[i])
		return (srclen + (int)dstsize);
	while (*src && i < (int)dstsize - 1)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
