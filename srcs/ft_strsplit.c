/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 15:39:53 by ypringau          #+#    #+#             */
/*   Updated: 2015/11/21 12:29:18 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static int		size_word(char *s, char c)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		res++;
	}
	return (res);
}

static void		put_word_in_tab(int nb_w, char c, char **tab, char *s)
{
	int		i;
	int		j;
	int		size;

	size = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0' && j < nb_w)
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0') ||
			(s[0] != c && i == 0))
		{
			if (s[i] == c)
				i++;
			size = size_word(&s[i], c);
			tab[j] = ft_strsub(s, i, size);
			j++;
		}
		i++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_w;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	nb_w = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0') ||
			(s[0] != c && i == 0))
			nb_w++;
		i++;
	}
	tab = (char**)malloc(sizeof(char**) * nb_w + 1);
	if (tab)
	{
		put_word_in_tab(nb_w, c, tab, (char*)s);
		tab[nb_w] = "\0";
	}
	else
		return (NULL);
	return (tab);
}
