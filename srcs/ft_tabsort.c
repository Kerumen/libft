/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 17:22:39 by ypringau          #+#    #+#             */
/*   Updated: 2013/12/01 18:30:19 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabsort(char **tab, int n)
{
	int		i;
	int		loop;
	char	*tmp;

	i = 0;
	loop = 1;
	while (loop)
	{
		i = 0;
		loop = 0;
		while (i < n - 1 && tab[i + 1] != NULL)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab [i + 1] = tmp;
				loop = 1;
			}
			i++;
		}
	}
}
