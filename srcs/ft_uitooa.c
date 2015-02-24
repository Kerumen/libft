/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitooa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:21:20 by prenvois          #+#    #+#             */
/*   Updated: 2014/02/04 14:45:30 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char			*putnbr_to_str(int len, unsigned int n)
{
	char			*str;

	if (!(str = (char*)malloc(sizeof(*str) * (size_t)(len + 1))))
		return (NULL);
	str[len--] = '\0';
	while (n)
	{
		str[len--] = n % 8 + '0';
		n /= 8;
	}
	return (str);
}

char				*ft_uitooa(unsigned int n)
{
	int				len;
	unsigned int	tmp;

	len = 0;
	tmp = n;
	if (!n)
		return ("0");
	while (tmp)
	{
		len++;
		tmp /= 8;
	}
	return (putnbr_to_str(len, n));
}
