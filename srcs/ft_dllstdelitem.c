/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstdelitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 19:32:06 by prenvois          #+#    #+#             */
/*   Updated: 2014/03/25 19:32:08 by prenvois         ###   ########.fr       */
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
