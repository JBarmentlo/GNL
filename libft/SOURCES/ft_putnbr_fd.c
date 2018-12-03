/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:49:32 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 11:13:36 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	print(int n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		print(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		print(n, fd);
	}
}
