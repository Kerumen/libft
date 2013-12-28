/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:02:23 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/23 15:36:28 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp1;
	char	*tmp2;
	char	*tmp;

	tmp = (char*)s1;
	if (!*s2)
		return ((char*)s1);
	while (*tmp)
	{
		tmp1 = (char*)tmp;
		tmp2 = (char*)s2;
		while (*tmp && *tmp2 && *tmp == *tmp2)
		{
			tmp++;
			tmp2++;
		}
		if (!*tmp2)
			return (tmp1);
		tmp = tmp1 + 1;
	}
	return (NULL);
}
