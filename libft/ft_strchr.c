/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:08:40 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/14 16:30:13 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*out;

	out = (char*)s;
	ch = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return (out + i);
		i++;
	}
	if (s[i] == ch)
		return (out + i);
	return (NULL);
}
