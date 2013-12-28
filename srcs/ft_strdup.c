/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:28:02 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/23 15:29:05 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*strdup;
	int		i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	strdup = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (strdup == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
