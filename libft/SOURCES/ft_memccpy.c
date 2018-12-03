/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:58:02 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 10:24:16 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	c = (unsigned char)c;
	while (n--)
	{
		*dest = *source;
		dest++;
		if (*source == c)
			return ((dest));
		source++;
	}
	return (NULL);
}
