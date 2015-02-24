/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 17:53:10 by ypringau          #+#    #+#             */
/*   Updated: 2015/01/26 17:53:12 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str, int len)
{
	int		j;
	int		i;
	char	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static char	*ft_itoa_it(int n, char *str)
{
	int		sign;
	int		i;

	sign = (n < 0) ? 1 : 0;
	i = 0;
	if (n == 0)
	{
		str[i++] = '0';
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	str[i] = '\0';
	ft_reverse(str + sign, i - sign);
	return (str);
}

static int	ft_getlen(int nb)
{
	int		cpt;

	cpt = (nb == 0) ? 1 : 0;
	if (nb < 0)
	{
		nb = -nb;
		cpt++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		cpt++;
	}
	return (cpt);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	len = ft_getlen(n);
	str = ft_strnew(len);
	if (!str)
	{
		return (NULL);
	}
	return (ft_itoa_it(n, str));
}
