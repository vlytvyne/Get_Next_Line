/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:16:58 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/27 16:17:00 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bytes;
	unsigned char	byte;

	bytes = (unsigned char*)s;
	byte = (unsigned char)c;
	while (n)
	{
		if (*bytes == byte)
			return (bytes);
		bytes++;
		n--;
	}
	return (0);
}
