/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlytvyne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:06:07 by vlytvyne          #+#    #+#             */
/*   Updated: 2018/10/29 14:27:57 by vlytvyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	size_t	i;

	i = 0;
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	if (content_size != 0)
		if (!(list->content = malloc(content_size)))
			return (NULL);
	list->content_size = content_size;
	ft_memcpy(list->content, content, content_size);
	return (list);
}
