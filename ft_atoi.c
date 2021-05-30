/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:27:40 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/18 11:32:26 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The atoi() function converts the initial portion of the string pointed to
** by str to int representation.
*/

#include "libft.h"

static int	ft_check(long r, int s)
{
	if (r > 2147483647 && s > 0)
		return (-1);
	if (r > 2147483648 && s < 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && r < 2147483647)
		r = r * 10 + str[i++] - 48;
	if (ft_check(r, s) != 1)
		return (ft_check(r, s));
	return (r * s);
}
