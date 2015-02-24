/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:01:22 by ypringau          #+#    #+#             */
/*   Updated: 2014/03/25 19:35:33 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[i] == '\0')
		{
			return (1);
		}
		if (s1[i] != s2[i])
		{
			return ((s1[i] > s2[i]) ? 1 : -1);
		}
		i++;
	}
	if (s2[i] != '\0' && i != n)
	{
		return (-1);
	}
	return (0);
}
