/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:57:14 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/12 15:01:48 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*out;

	out = (char*)s;
	ch = (char)c;
	i = ft_strlen(out);
	while (i != 0)
	{
		if (s[i] == ch)
			return (out + i);
		i--;
	}
	if (s[i] == ch)
		return (out + i);
	return (NULL);
}
