/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 10:48:02 by jbarment          #+#    #+#             */
/*   Updated: 2018/12/03 10:56:14 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	push_back(t_dlist **first, int fd, char *buf, size_t size)
{
	t_dlist	*new;
	size_t	eol;

	eol = 0;
	while (buf[eol] != '\0' && buf[eol] != '\n' && eol + 1 < size)
		eol++;
	eol++;
	if (!(new = new_dlist()))
		return ;
	new->id = fd;
	if (!(new->str = (stralloc(eol + 1))))
		return ;
	ft_memcpy(new->str, buf, eol);
	new->next = NULL;
	new->content_size = eol;
	pushback_dlist(first, new);
	if (eol != size)
		push_back(first, fd, buf + eol, size - eol);
}

size_t	is_line(t_dlist **first, int fd, int force)
{
	size_t		line_size;
	t_dlist		*it;

	line_size = 0;
	if (first == NULL || *first == NULL)
		return (0);
	it = *first;
	while (it)
	{
		if (it->id == fd)
		{
			line_size = line_size + it->content_size;
			if ((it->str[it->content_size - 1]) == '\n')
				return (line_size);
		}
		it = it->next;
	}
	if (force)
		return (line_size);
	return (0);
}

char	*make_line(t_dlist **first, size_t line_size, int fd)
{
	t_dlist	*it;
	char	*out;

	it = *first;
	if (!(out = ft_strnew(line_size - 1)))
		return (NULL);
	while (it && line_size)
	{
		if (it->id == fd)
		{
			line_size -= it->content_size;
			ft_strncat(out, it->str, it->content_size - (it->str[it->content_size - 1] == '\n'));
			pop_dlist(&it, first);
		}
		it = it->next;
	}
	return (out);
}


#include <stdio.h>
int		get_next_line(const int fd, char **line)
{
	static t_dlist	*first = NULL;
	char			buff[BUFF_SIZE];
	size_t			line_size;
	int				red;

	if (fd < 0 || line == NULL)
		return (-1);
	while (!(is_line(&first, fd, 0)) && (red = read(fd, buff, BUFF_SIZE)) && red > 0)
	{
		push_back(&first, fd, buff, (size_t)red);
	}
	if (red < 0)
		return (-1);
	if ((line_size = is_line(&first, fd, 1)))
	{
		
		*line = make_line(&first, line_size, fd);
		return (1);
	}
	return (0);
}
