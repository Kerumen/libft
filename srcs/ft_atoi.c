/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 09:40:18 by ypringau          #+#    #+#             */
/*   Updated: 2015/01/27 09:40:20 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_remove(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	return (str);
}

static void			ft_assign(int *i, int *res, int *sign)
{
	*i = 0;
	*res = 0;
	*sign = 1;
}

int					ft_atoi(const char *str)
{
	int		res;
	int		sign;
	int		i;

	ft_assign(&i, &res, &sign);
	if (str == NULL)
		return (0);
	str = ft_remove(str);
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (res * sign);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
