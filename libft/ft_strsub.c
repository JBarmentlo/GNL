/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:29:10 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 18:01:32 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;

	if (str == NULL)
		return (NULL);
	out = ft_strnew(len);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = str[start + i];
		i++;
	}
	return (out);
}
