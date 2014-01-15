/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:01:15 by ypringau          #+#    #+#             */
/*   Updated: 2014/01/15 10:46:01 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	char			*str;
	size_t			i;

	i = 0;
	c2 = (unsigned char)c;
	str = b;
	while (i < len)
	{
		str[i] = (char)c2;
		i++;
	}
	return (str);
}
