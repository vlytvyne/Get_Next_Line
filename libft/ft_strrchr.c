/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:26:59 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/24 16:27:43 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res = (char*)s;
		s++;
	}
	if (*s == c)
		return ((char*)s);
	return (res);
}
