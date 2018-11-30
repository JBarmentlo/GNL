/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:51:40 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:05:59 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	unsigned char	*src;
	size_t			i;

	needle = (unsigned char)c;
	src = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == needle)
			return (src + i);
		i++;
	}
	return (NULL);
}
