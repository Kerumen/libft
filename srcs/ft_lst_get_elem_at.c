/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_elem_at.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 12:26:45 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 12:30:05 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lst_get_elem_at(t_list *alst, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	i = 1;
	list = alst;
	while (list != NULL && i < nbr)
	{
		list = list->next;
		i++;
	}
	if (list == NULL)
		return (NULL);
	else
		return (list);
}
