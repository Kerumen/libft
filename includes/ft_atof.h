/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 11:38:41 by ypringau          #+#    #+#             */
/*   Updated: 2014/01/15 11:40:49 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOF_H
# define FT_ATOF_H

typedef struct	s_atof
{
	double	integer_part;
	double	fraction_part;
	int		divisor;
	int		sign;
	int		fraction;
}				t_atof;

#endif
