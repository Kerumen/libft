/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstdel(*item).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 11:23:58 by ypringau         #+#    #+#              */
/*   Updated: 2014/01/05 18:33:45 by ypringau        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_dllstdelitem(t_dllist **item)
{
	t_dllist	*tmp;

	tmp = *item;
	if ((*item)->prev == NULL)
	{
		(*item)->next->prev = NULL;
		(*item) = (*item)->next;
	}
	else if ((*item)->next == NULL)
	{
		(*item)->prev->next = NULL;
		(*item) = (*item)->prev;
	}
	else
	{
		(*item)->prev->next = (*item)->next;
		(*item)->next->prev = (*item)->prev;
		(*item) = (*item)->next;
	}
	free(tmp);
}

