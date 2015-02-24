/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 15:51:03 by ypringau          #+#    #+#             */
/*   Updated: 2014/03/25 19:36:55 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strrev(const char *s)
{
	char	*ret;
	int		i;
	int		n;

	i = -1;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		++i;
	n = i - 1;
	ret = (char*)malloc(i * sizeof(*ret));
	if (ret == NULL)
		return (NULL);
	while (i >= 0)
	{
		ret[n - i] = s[i];
		i--;
	}
	ret[n + 1] = '\0';
	return (ret);
}
