/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:03:12 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:31:29 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	char				*out;

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
		out[len] = f(len, s[len]);
		len++;
	}
	return (out);
}
