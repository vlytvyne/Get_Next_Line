/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:21:43 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/27 20:24:07 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list *head;

	if (lst != NULL)
	{
		head = f(lst);
		head->next = ft_lstmap(lst->next, f);
	}
	else
		return (NULL);
	return (head);
}
