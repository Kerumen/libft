/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:14:21 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/23 15:16:15 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	if (s[0] == ch)
	{
		return ((char*)s);
	}
	while (*s++)
	{
		if (*s == ch)
		{
			return ((char*)s);
		}
	}
	return (NULL);
}
