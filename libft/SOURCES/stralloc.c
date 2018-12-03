/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stralloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:11:47 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:29:47 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*stralloc(size_t size)
{
	char			*out;
	unsigned int	i;

	if (!(out = (char*)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i++ < size)
		out[i] = '+';
	out[i] = '\0';
	return (out);
}
