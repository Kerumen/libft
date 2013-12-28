/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:38:35 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 14:56:09 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*dest;
	char			*src;
	unsigned char	w;

	dest = (char*)s1;
	src = (char*)s2;
	w = (unsigned char)c;
	if (n)
	{
		while (n)
		{
			if ((*dest++ = *src++) == w)
				return (dest);
			n--;
		}
	}
	return (NULL);
}
