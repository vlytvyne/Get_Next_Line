/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:09:58 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/26 19:17:43 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_length(int n)
{
	size_t	len;
	int		divider;

	len = 0;
	divider = 1000000000;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n / divider == 0 && divider > 0)
		divider /= 10;
	while (divider > 0)
	{
		divider /= 10;
		len++;
	}
	return (len);
}

static char		*alloc_for_min(void)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * 12)))
		return (0);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char		*alloc_for_zero(void)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * 2)))
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		minus;

	i = 0;
	if (n == -2147483648)
		return (alloc_for_min());
	if (!(str = (char*)malloc(sizeof(char) * (count_length(n) + 1))))
		return (0);
	if (n == 0)
		return (alloc_for_zero());
	minus = n < 0 ? 1 : 0;
	n = n < 0 ? -n : n;
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (minus)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
