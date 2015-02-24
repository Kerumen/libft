/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 09:49:26 by ypringau          #+#    #+#             */
/*   Updated: 2015/01/27 09:49:27 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	lenght;
	char	*str;
	size_t	i;

	str = NULL;
	if (s)
	{
		lenght = (s != NULL) ? ft_strlen(s) : 0;
		if (lenght < (start + len))
			return (NULL);
		i = 0;
		str = ft_strnew(lenght - start + 1);
		if (!str)
			return (NULL);
		while (s[start + i] != '\0' && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
