/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:26:05 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 10:46:11 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	first = f(lst);
	last = first;
	lst = lst->next;
	while (lst != NULL)
	{
		last->next = f(lst);
		if (last == NULL)
			return (NULL);
		lst = lst->next;
		last = last->next;
	}
	return (first);
}
