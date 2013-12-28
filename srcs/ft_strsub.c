/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:35:17 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/25 12:21:30 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	if (s)
	{
		i = 0;
		strsub = (char *) malloc(sizeof(char) * (len + 1));
		while (i < (start + len))
		{
			if (i >= start)
				strsub[i - start] = s[i];
			i++;
		}
		strsub[len] = '\0';
		return (strsub);
	}
	else
		return (NULL);
}

