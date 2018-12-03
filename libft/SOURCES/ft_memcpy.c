/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:48:05 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 14:56:10 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dstore;

	dstore = dst;
	while (n--)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
	}
	return (dstore);
}
