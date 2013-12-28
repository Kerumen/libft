/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:54:37 by ypringau          #+#    #+#             */
/*   Updated: 2013/11/25 11:39:28 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(const char *s1, const char *s2)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		if (ft_strlen(s1) != ft_strlen(s2))
		{
			return (0);
		}
		while (s1[i] != '\0' && s1[i] == s2[i])
		{
			i++;
		}
		if (i == ft_strlen(s1))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
