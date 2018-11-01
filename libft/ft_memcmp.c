/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:33:21 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/27 16:33:23 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *uns_s1;
	unsigned char *uns_s2;

	uns_s1 = (unsigned char*)s1;
	uns_s2 = (unsigned char*)s2;
	while (n)
	{
		if (*uns_s1 - *uns_s2 != 0)
			return (*uns_s1 - *uns_s2);
		uns_s1++;
		uns_s2++;
		n--;
	}
	return (0);
}
