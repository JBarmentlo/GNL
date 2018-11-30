/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:43:25 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:13:24 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(long n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		print(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void		ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	print(n);
}
