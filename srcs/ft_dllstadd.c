/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 19:31:11 by prenvois          #+#    #+#             */
/*   Updated: 2014/03/25 19:31:13 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dllstadd(t_dllist **alst, t_dllist *new)
{
	new->next = (*alst);
	(*alst)->prev = new;
	*alst = new;
}
