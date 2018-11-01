/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:59:05 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/22 20:25:25 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *uns_s1;
	unsigned char *uns_s2;

	uns_s1 = (unsigned char*)s1;
	uns_s2 = (unsigned char*)s2;
	while (*uns_s1 && *uns_s2)
	{
		if (*uns_s1 - *uns_s2 != 0)
			return (*uns_s1 - *uns_s2);
		uns_s1++;
		uns_s2++;
	}
	return ((unsigned char)*uns_s1 - *uns_s2);
}
