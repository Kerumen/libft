/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 14:47:51 by ypringau          #+#    #+#             */
/*   Updated: 2014/03/25 19:33:16 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		ft_lstswap(t_list *s1, t_list *s2)
{
	t_list	tmp;
	size_t	size;

	size = sizeof(t_list) - sizeof(t_list*);
	ft_memcpy(&tmp, s1, size);
	ft_memcpy(s1, s2, size);
	ft_memcpy(s2, &tmp, size);
}
