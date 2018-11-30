/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:25:49 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 10:45:55 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char*)b;
	i = 0;
	val = (unsigned char)c;
	while (i < len)
	{
		*(str + i) = val;
		i++;
	}
	return (str);
}
