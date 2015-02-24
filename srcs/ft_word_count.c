/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 16:16:19 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/16 18:09:32 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_word_count(char *str)
{
	int				i;
	int				word;
	int				count;

	i = 0;
	count = 1;
	word = 1;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			word = 1;
		else if (word == 1)
		{
			count += 1;
			word = 0;
		}
		i++;
	}
	return (count);
}
