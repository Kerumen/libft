/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:50:48 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 14:57:57 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	const char	*src;
	char		*dest;

	src = s2;
	dest = s1;
	if (dest <= src || src >= (dest + n))
	{
		while (n)
		{
			*dest++ = *src++;
			n--;
		}
	}
	else
	{
		src = src + n - 1;
		dest = dest + n - 1;
		while (n)
		{
			*dest-- = *src--;
			n--;
		}
	}
	return (s1);
}

