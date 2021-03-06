/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:03:49 by jbarment          #+#    #+#             */
/*   Updated: 2018/12/03 14:04:57 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnstr(char const *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str && *str && i < size)
	{
		write(1, str++, 1);
		i++;
	}
}
