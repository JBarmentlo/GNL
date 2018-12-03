/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:03:24 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 18:02:01 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*out;
	unsigned char	*suk;
	size_t			i;

	if (!(out = malloc(size)))
		return (NULL);
	i = 0;
	suk = (unsigned char*)out;
	while (i < size)
	{
		suk[i] = 0;
		i++;
	}
	return (out);
}
