/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:01:15 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/23 15:09:31 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		str[i] = c2;
		i++;
	}
	return (str);
}
