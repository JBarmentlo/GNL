/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:59:59 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:30:28 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static size_t	length(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strtrim(char const *str)
{
	unsigned int	i;
	unsigned int	spaces;
	unsigned int	start;
	size_t			len;
	char			*out;

	if (str == NULL)
		return (NULL);
	spaces = 0;
	start = 0;
	i = 0;
	len = length(str);
	while (space(str[i]))
	{
		i++;
		start++;
		len--;
	}
	while (str[i] && str[i + 1])
		i++;
	while (space(str[i]) && (len-- || 1))
		i--;
	out = ft_strsub(str, start, len);
	return (out);
}
