/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 10:26:05 by ypringau          #+#    #+#             */
/*   Updated: 2015/02/24 09:57:16 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

static t_list	*get_str(t_list *mem, int const fd)
{
	if (!mem)
	{
		mem = ft_lstnew(NULL, fd);
		mem->content_size = fd;
	}
	while (mem->next && mem->content_size != (unsigned int)fd)
		mem = mem->next;
	if (mem->content_size != (unsigned int)fd)
	{
		ft_lstadd_end(&mem, ft_lstnew(NULL, fd));
		mem = mem->next;
		mem->content_size = fd;
	}
	return (mem);
}

int				get_next_line(int const fd, char **line)
{
	static t_list	*lst;
	t_list			*lsttemp;
	char			*stock;
	int				ret;
	char			*buf;

	if (!lst)
		lst = ft_lstnew(NULL, fd);
	lsttemp = lst;
	lsttemp = get_str(lsttemp, fd);
	stock = lsttemp->content;
	buf = (stock) ? ft_strcpy(ft_strnew(BUFF_SIZE + 1), stock) :
		ft_strnew(BUFF_SIZE + 1);
	if (fd < 0 || BUFF_SIZE <= 0 || !line)
		return (-1);
	while (!ft_strchr(buf, '\n') && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		stock = (!stock) ? ft_strdup(buf) : ft_strjoin(stock, buf);
	}
	if (ret == -1 || (ret == 0 && !stock))
		return (ret);
	*line = (ft_strchrrev(stock, '\n')) ? ft_strchrrev(stock, '\n') : stock;
	lsttemp->content = stock + ft_strlen(*line) + 1;
	return (!(*line == stock));
}
