/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstgetitemat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 18:32:34 by ypringau          #+#    #+#             */
/*   Updated: 2014/02/09 15:55:16 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dllist	*ft_dllstgetitemat(t_dllist *alst, unsigned int nbr)
{
	unsigned int		i;
	t_dllist			*list;

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
