/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:26:28 by ypringau          #+#    #+#             */
/*   Updated: 2014/03/25 19:35:19 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s && f)
	{
		i = 0;
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str)
		{
			while (s[i] != '\0')
			{
				str[i] = f(s[i]);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
