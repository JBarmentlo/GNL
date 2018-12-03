/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:36:32 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:14:24 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_strclr(char *str)
{
	int	i;

	if (str == NULL)
		return ;
	i = -1;
	while (str[++i])
		str[i] = '\0';
}