/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:27:39 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 14:56:55 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char		d;

	src = (unsigned char *)s;
	d = c;
	while (n)
	{
		if (*src == d)
			return ((void*)src);
		src++;
		n--;
	}
	return (NULL);
}
