/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:02:11 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 15:06:24 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;

	if (ft_strlen(s2) == 0)
		return ((char *) s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			y = 1;
			while (s2[y] == s1[i + y] && (y + i) < n)
			{
				y++;
			}
			if (s2[y] == '\0')
			{
				return (&(((char *) s1)[i]));
			}
		}
		i++;
	}
	return (NULL);
}
