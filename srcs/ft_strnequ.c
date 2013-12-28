/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:54:37 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/25 11:40:28 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (ft_strlen(s1) < n)
	{
		if (i == ft_strlen(s1))
			return (1);
	}
	else
	{
		if (i == n)
			return (1);
	}
	return (0);
	}
	else
	{
		return (0);
	}
}
