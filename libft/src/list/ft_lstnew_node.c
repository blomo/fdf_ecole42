/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleann <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 23:19:26 by jleann            #+#    #+#             */
/*   Updated: 2019/04/04 23:19:27 by jleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_string.h"

t_list_node				*ft_lstnew_node(void *content, size_t content_size)
{
	t_list_node	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		res->content = NULL;
		res->content_size = 0;
		res->next = NULL;
		res->prev = NULL;
		return (res);
	}
	if (!(res->content = malloc(content_size)))
	{
		free(res);
		return (NULL);
	}
	ft_memcpy(res->content, content, content_size);
	res->content_size = content_size;
	res->next = NULL;
	res->prev = NULL;
	return (res);
}
