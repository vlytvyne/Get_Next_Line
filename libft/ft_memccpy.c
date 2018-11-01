/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:21:51 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/25 15:30:08 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_bytes;
	unsigned char	*src_bytes;
	size_t			i;
	unsigned char	ch;

	i = 0;
	dst_bytes = (unsigned char*)dst;
	src_bytes = (unsigned char*)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		*dst_bytes = src_bytes[i];
		dst_bytes++;
		if (src_bytes[i] == ch)
			return (dst_bytes);
		i++;
	}
	return (0);
}
