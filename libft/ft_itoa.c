/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:47:19 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 10:47:02 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*alloc(int len)
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		out[i] = '+';
		i++;
	}
	out[i] = '\0';
	return (out);
}

static char	*ltoa(long nb, int sign, int iter)
{
	char	*out;

	if (nb < 10)
	{
		if ((out = alloc(iter + sign + 1)) == NULL)
			return (NULL);
		out[sign] = nb + '0';
	}
	if (nb >= 10)
	{
		if ((out = ltoa(nb / 10, sign, iter + 1)) == NULL)
			return (NULL);
		out[ft_strlen(out) - iter - 1] = nb % 10 + '0';
	}
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
		out = ltoa(nb, 1, 0);
		out[0] = '-';
	}
	return (out);
}

char		*ft_itoa(int n)
{
	long	nb;

	nb = n;
	return (ltoa(nb, 0, 0));
}
