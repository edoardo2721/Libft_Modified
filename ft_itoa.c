/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:34:07 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/16 18:56:37 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns a string representing the integer
** received as an argument. Negative numbers must be handled.
**
** RETURN VALUES:
**	The string representing the integer.  NULL if the allocation fails.
*/

#include "libft.h"

static long	ft_num(long n)
{
	long	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(long n)
{
	char	*num;
	int		s;
	size_t	d;

	s = 1;
	if (n <= 0)
		s += 1;
	d = ft_num(n);
	num = (char *)ft_calloc(sizeof(char), (d + s));
	if (!(num))
		return (0);
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
		s -= 2;
	}
	else if (n != 0)
		d--;
	while (d + s)
	{
		num[d--] = 48 + (n % 10);
		n /= 10;
	}
	return (num);
}
