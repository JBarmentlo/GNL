/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:24:28 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/22 10:20:18 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_isnum(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long	out;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	out = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = sign - str[i] + 43;
		i++;
	}
	while (ft_isnum(str[i]))
	{
		out = out * 10 + str[i] - '0';
		i++;
	}
	out = out * sign;
	if (out < -2147483648 || out > 2147483647)
		return (0);
	return ((int)out);
}
