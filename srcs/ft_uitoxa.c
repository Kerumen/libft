/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoxa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:41:28 by prenvois          #+#    #+#             */
/*   Updated: 2014/02/04 14:45:43 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*putnbr_to_str(int len, long int n)
{
	char		*str;

	if (!(str = (char*)malloc(sizeof(*str) * (size_t)(len + 1))))
		return (NULL);
	str[len--] = '\0';
	while (n)
	{
		if ((n % 16) > 9)
			str[len--] = n % 16 + 87;
		else
			str[len--] = n % 16 + 48;
		n /= 16;
	}
	return (str);
}

char			*ft_uitoxa(long int n)
{
	int			len;
	long int	tmp;

	len = 0;
	tmp = n;
	if (!tmp)
		return ("0");
	while (tmp)
	{
		len++;
		tmp /= 16;
	}
	return (putnbr_to_str(len, n));
}
