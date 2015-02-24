/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prenvois <prenvois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 14:41:27 by prenvois          #+#    #+#             */
/*   Updated: 2014/03/12 15:00:40 by prenvois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

#define SPEC "dicsuoxp%"

static void		check_spec3(t_printfd *e, const char *format)
{
	char		*str;
	t_opts		ops;

	str = NULL;
	if (format[e->i] == SPEC[6])
	{
		ops.x = va_arg(e->ap, unsigned int);
		str = ft_uitoxa(ops.x);
		write(e->fd, str, (e->ret = ft_strlen(str)));
		free(str);
	}
	else if (format[e->i] == SPEC[7])
	{
		ops.p = va_arg(e->ap, long unsigned int);
		str = ft_luitoxa(ops.p);
		write(e->fd, str, (e->ret = ft_strlen(str)));
		free(str);
	}
	else if (format[e->i] == SPEC[8])
		write(e->fd, "%", (e->ret = 1));
}

static void		check_spec2(t_printfd *e, const char *format)
{
	char		*str;
	t_opts		ops;

	str = NULL;
	if (format[e->i] == SPEC[4])
	{
		ops.u = va_arg(e->ap, unsigned int);
		str = ft_uitoa(ops.u);
		write(e->fd, str, (e->ret = ft_strlen(str)));
		free(str);
	}
	else if (format[e->i] == SPEC[5])
	{
		ops.o = va_arg(e->ap, unsigned int);
		str = ft_uitooa(ops.o);
		write(e->fd, str, (e->ret = ft_strlen(str)));
		free(str);
	}
	else
		check_spec3(e, format);
}

static void		check_spec(t_printfd *e, const char *format)
{
	char		*str;
	t_opts		ops;

	str = NULL;
	if (format[e->i] == SPEC[0] || format[e->i] == SPEC[1])
	{
		ops.d = va_arg(e->ap, int);
		str = ft_itoa(ops.d);
		write(e->fd, str, (e->ret = ft_strlen(str)));
		free(str);
	}
	else if (format[e->i] == SPEC[2])
	{
		ops.c = (char)va_arg(e->ap, int);
		write(e->fd, &ops.c, (e->ret = 1));
	}
	else if (format[e->i] == SPEC[3])
	{
		if ((ops.s = va_arg(e->ap, char*)))
			write(e->fd, ops.s, (e->ret = ft_strlen(ops.s)));
		else
			write(e->fd, "(null)", (e->ret = 6));
	}
	else
		check_spec2(e, format);
}

static void		parser(t_printfd *e, const char *format)
{
	while (!ft_strchr(SPEC, format[e->i]) && !ft_isalpha(format[e->i])
			&& format[e->i])
		(e->i)++;
	if (ft_strchr(SPEC, format[e->i]))
	{
		check_spec(e, format);
		(e->i)++;
	}
}

int				ft_printf_fd(const char *format, int fd, ...)
{
	t_printfd	e;
	size_t		c;

	e.fd = fd;
	e.i = 0;
	c = 0;
	e.ret = 0;
	va_start(e.ap, fd);
	while (format[e.i])
	{
		if (format[e.i] == '%')
		{
			(e.i)++;
			parser(&e, format);
		}
		else
		{
			write(e.fd, &(format[(e.i)++]), 1);
			c++;
		}
	}
	e.ret += c;
	va_end(e.ap);
	return ((int)(e.ret));
}
