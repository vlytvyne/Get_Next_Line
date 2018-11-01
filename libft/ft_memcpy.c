/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:50:31 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/25 14:57:11 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_bytes;
	char	*src_bytes;

	dst_bytes = dst;
	src_bytes = (char*)src;
	i = 0;
	while (i < n)
	{
		dst_bytes[i] = src_bytes[i];
		i++;
	}
	return (dst);
}
