/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:31:10 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/27 19:34:17 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *next;

	if (!(next = (*alst)->next))
	{
		ft_lstdelone(alst, del);
		return ;
	}
	ft_lstdelone(alst, del);
	ft_lstdel(&next, del);
}
