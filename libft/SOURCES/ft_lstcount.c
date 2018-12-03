/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:45:45 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/21 17:50:03 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount(t_list **alst)
{
	int		count;
	t_list	*it;

	count = 0;
	if (alst == NULL || *alst == NULL)
		return (0);
	it = *alst;
	while (it->next != NULL)
	{
		it = it->next;
		count++;
	}
	return (count);
}
