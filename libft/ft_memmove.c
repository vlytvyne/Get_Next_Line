/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:28:10 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/25 19:03:02 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *bytes_dst;
	unsigned char *bytes_src;

	bytes_dst = (unsigned char*)dst;
	bytes_src = (unsigned char*)src;
	if (bytes_dst <= bytes_src || bytes_dst >= (len + bytes_src))
	{
		ft_memcpy(bytes_dst, bytes_src, len);
		return (dst);
	}
	bytes_dst += len - 1;
	bytes_src += len - 1;
	while (len)
	{
		*bytes_dst = *bytes_src;
		bytes_src--;
		bytes_dst--;
		len--;
	}
	return (dst);
}
