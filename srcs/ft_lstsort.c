/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 17:22:39 by ypringau          #+#    #+#             */
/*   Updated: 2014/03/25 19:33:07 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstsort(t_list **root)
{
	int		loop;
	t_list	*list;

	list = *root;
	loop = 1;
	while (loop)
	{
		loop = 0;
		list = *root;
		while (list && list->next != NULL)
		{
			if (ft_strcmp(list->content, list->next->content) > 0)
			{
				ft_lstswap(list, list->next);
				loop = 1;
			}
			list = list->next;
		}
	}
}
