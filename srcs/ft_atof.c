/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:48:51 by ypringau          #+#    #+#             */
/*   Updated: 2015/11/21 12:35:06 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		check_sign(char **n, t_atof *atof)
{
	if (**n == '-')
	{
		++(*n);
		atof->sign = -1;
	}
	else if (**n == '+')
		++(*n);
}

static void		init(t_atof *atof)
{
	atof->fraction = 0;
	atof->sign = 1;
	atof->divisor = 1;
	atof->fpart = 0;
	atof->ipart = 0;
}

static void		number(t_atof *atof, char *n)
{
	if (atof->fraction)
	{
		atof->fpart = atof->fpart * 10 + (*n - '0');
		atof->divisor *= 10;
	}
	else
		atof->ipart = atof->fpart * 10 + (*n - '0');
}

static int		point(t_atof *atof)
{
	if (atof->fraction)
		return (atof->sign * (atof->ipart + atof->fpart
		/ atof->divisor));
	else
		atof->fraction = 1;
	return (0);
}

double			ft_atof(char *n)
{
	t_atof	atof;

	init(&atof);
	if (!n || !*n)
		return (0);
	check_sign(&n, &atof);
	while (*n != '\0')
	{
		if (*n >= '0' && *n <= '9')
			number(&atof, n);
		else if (*n == '.')
			point(&atof);
		else
			return (atof.sign * (atof.ipart + atof.fpart / atof.divisor));
		n++;
	}
	return (atof.sign * (atof.ipart + atof.fpart
	/ atof.divisor));
}
