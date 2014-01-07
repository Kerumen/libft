/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 10:56:41 by ypringau         #+#    #+#              */
/*   Updated: 2014/01/05 14:44:07 by ypringau        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

t_dllist		*ft_dllstnew(void const *content, size_t content_size)
{
	t_dllist	*root;

	root = (t_dllist*)malloc(sizeof(t_dllist));
	if (!root)
		return (NULL);
	root->next = NULL;
	root->prev = NULL;
	root->content = NULL;
	root->content_size = 0;
	if (content)
	{
		root->content = malloc(content_size);
		if (root->content)
		{
			ft_memcpy(root->content, content, content_size);
			root->content_size = content_size;
		}
	}
	return (root);
}
