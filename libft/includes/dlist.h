/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:28:01 by jbarment          #+#    #+#             */
/*   Updated: 2018/12/03 14:33:23 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLIST_H
# define DLIST_H
# define MEM_SIZE 1
# define BUFF_SIZE 10
# include <string.h>

typedef	struct		s_dlist
{
	int				id;
	size_t			content_size;
	char			*str;
	void			**mem[MEM_SIZE];
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

void				update_mem_dlist(t_dlist *node);
void				free_dlist(t_dlist **node);
t_dlist				*new_dlist(void);
void				pushback_dlist(t_dlist **last, t_dlist *node);
void				pushfront_dlist(t_dlist **first, t_dlist *node);
void				pop_dlist(t_dlist **node, t_dlist **first);
#endif
