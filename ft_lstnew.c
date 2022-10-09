/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:43:58 by lucimart          #+#    #+#             */
/*   Updated: 2022/09/13 22:21:29 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	size_t	content_len;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	if (!content)
		node->content = NULL;
	else
	{
		content_len = ft_strlen((char *)content);
		node->content = (void *)malloc(content_len);
		if (!node)
			return (NULL);
		ft_memmove(node->content, content, content_len);
	}
	node->next = NULL;
	return (node);
}
