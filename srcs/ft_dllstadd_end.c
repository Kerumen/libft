/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstadd_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 19:31:33 by prenvois          #+#    #+#             */
/*   Updated: 2014/03/25 19:31:36 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dllstadd_end(t_dllist **alst, t_dllist *new)
{
	t_dllist	*root;

	root = *alst;
	while ((*alst)->next)
		*alst = (*alst)->next;
	new->prev = (*alst);
	(*alst)->next = new;
	*alst = root;
}
