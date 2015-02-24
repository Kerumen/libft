/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_luitoxa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 13:04:33 by prenvois          #+#    #+#             */
/*   Updated: 2014/03/17 15:17:43 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char			*putnbr_to_str(int len, unsigned long n)
{
	char			*str;
	char			*str2;

	if (!(str = (char*)malloc(sizeof(*str) * (size_t)(len + 1))))
		return (NULL);
	str2 = NULL;
	str[len--] = '\0';
	while (n)
	{
		if ((n % 16) > 9)
			str[len--] = n % 16 + 87;
		else
			str[len--] = n % 16 + 48;
		n /= 16;
	}
	str2 = ft_strjoin("0x", str);
	free(str);
	return (str2);
}

char				*ft_luitoxa(unsigned long n)
{
	int				len;
	unsigned long	tmp;

	len = 0;
	tmp = n;
	if (!n)
		return ("0x0");
	while (tmp)
	{
		len++;
		tmp /= 16;
	}
	return (putnbr_to_str(len, n));
}
