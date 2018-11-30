/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:19:35 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 14:57:05 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		tab_len(char const *str, char c)
{
	unsigned int	i;
	int				words;

	if (str == NULL)
		return (0);
	i = 0;
	words = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
		words++;
	}
	return (words);
}

static int		len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	if (!s || !(out = (char **)malloc(sizeof(*out) *
		(tab_len(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < tab_len(s, c))
	{
		k = 0;
		if (!(out[i] = ft_strnew(len(&s[j], c) + 1)))
			out[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			out[i][k++] = s[j++];
		out[i][k] = '\0';
	}
	out[i] = NULL;
	return (out);
}
