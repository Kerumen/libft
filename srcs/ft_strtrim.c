/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:04:39 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/01 18:36:17 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_test_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;

	if (s)
	{
		j = 0;
		i = 0;
		str = (char *) malloc(sizeof(char) * (ft_strlen(s)));
		while (ft_test_char(s[i]) == 1)
			i++;
		str = ft_strsub(s, i, ft_strlen(s) - i);
		i = 0;
		while (str[j] != '\0')
		{
			if (ft_test_char(str[j]) == 1)
				i++;
			if (ft_test_char(str[j]) == 0 && str[j + 1] != '\0')
				i = 0;
			j++;
		}
		str[ft_strlen(str) - i] = '\0';
		return (str);
	}
	return (NULL);
}

