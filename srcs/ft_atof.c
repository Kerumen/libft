/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:48:51 by ypringau          #+#    #+#             */
/*   Updated: 2014/01/15 12:02:21 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_atof.h>

static void		check_sign(char **num, t_atof *atof)
{
	if (**num == '-')
	{
		++(*num);
		atof->sign = -1;
	}
	else if (**num == '+')
		++(*num);
}

static void		init(t_atof *atof)
{
	atof->fraction = 0;
	atof->sign = 1;
	atof->divisor = 1;
	atof->fraction_part = 0;
	atof->integer_part = 0;
}

static void		number(t_atof *atof, char *num)
{
	if (atof->fraction)
	{
		atof->fraction_part = atof->fraction_part * 10 + (*num - '0');
		atof->divisor *= 10;
	}
	else
		atof->integer_part = atof->integer_part * 10 + (*num - '0');
}

static int		point(t_atof *atof)
{
	if (atof->fraction)
		return (atof->sign * (atof->integer_part + atof->fraction_part
					/ atof->divisor));
	else
		atof->fraction = 1;
	return (0);
}

double			ft_atof(char *num)
{
	t_atof	atof;

	init(&atof);
	if (!num || !*num)
		return (0);
	check_sign(&num, &atof);
	while (*num != '\0')
	{
		if (*num >= '0' && *num <= '9')
			number(&atof, num);
		else if (*num == '.')
			point(&atof);
		else
			return (atof.sign * (atof.integer_part + atof.fraction_part
						/ atof.divisor));
		++num;
		}
		return (atof.sign * (atof.integer_part + atof.fraction_part
					/ atof.divisor));
}

