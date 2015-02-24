/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 09:43:22 by ypringau          #+#    #+#             */
/*   Updated: 2015/01/27 09:50:32 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		cpt;

	cpt = 0;
	while (cpt < n)
	{
		((unsigned char *)s1)[cpt] = ((unsigned char *)s2)[cpt];
		if (((unsigned char *)s2)[cpt] == (unsigned char)c)
			return ((void *)(((unsigned char *)s1) + cpt + 1));
		cpt++;
	}
	return (NULL);
}
