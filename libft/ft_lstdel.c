/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:12:47 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/21 16:19:56 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*next;
	t_list	*iter;

	iter = *alst;
	while (iter != NULL)
	{
		next = iter->next;
		ft_lstdelone(&iter, del);
		iter = next;
	}
	*alst = NULL;
}
