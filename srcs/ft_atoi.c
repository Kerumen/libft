/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:41:43 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/28 14:26:20 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	total;
	int	signe;
	int	i;

	total = 0;
	i = 0;
	signe = 1;
	while (str[i] < 33)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		signe = (str[i++] == '+' ? 1 : -1);
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		total = total * 10 + str[i++] - '0';
	}
	return (signe * total);
}

