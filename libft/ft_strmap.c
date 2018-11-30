/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:27:52 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 16:06:51 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*out;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	if (!(out = (char*)malloc(len + 1)))
		return (NULL);
	out[len] = '\0';
	len = 0;
	while (s[len])
	{
		out[len] = f(s[len]);
		len++;
	}
	return (out);
}
