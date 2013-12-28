/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 20:13:20 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 14:59:25 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_realloc(void *ptr, size_t taille)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(taille));
	if (taille == 0)
		return (ptr);
	new_ptr = malloc(taille);
	ft_memcpy(new_ptr, ptr, taille);
	return (new_ptr);
}
