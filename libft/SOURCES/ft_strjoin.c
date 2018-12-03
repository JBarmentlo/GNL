/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:36:09 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:31:11 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(out = ft_strnew(i + j)))
		return (NULL);
	ft_memcpy((void*)out, (void*)s1, i);
	ft_memcpy((void*)(out + i), (void*)s2, j + 1);
	return (out);
}
