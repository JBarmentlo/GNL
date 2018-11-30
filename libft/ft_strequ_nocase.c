/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_nocase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:26:43 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 17:26:47 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equal_nocase(char c, char d)
{
	if (c == d)
		return (1);
	if (ft_isalpha(c) && ft_isalpha(d))
		if ((c - d) * (c - d) == 32 * 32)
			return (1);
	return (0);
}

int			ft_strequ_nocase(char const *s1, char const *s2)
{
	int	i;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	i = 0;
	while (is_equal_nocase(s1[i], s2[i]) && s1[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
