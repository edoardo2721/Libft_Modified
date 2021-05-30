/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:29:13 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:41:15 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: Standard C Library
**
** DESCRIPTION:
**	The isalnum() function tests for any character for which isalpha(3) or
** isdigit(3) is true.	The value of the argument must be representable as
** an unsigned char or the value of EOF.
** In the ASCII character set, this includes the following characters:
**
** from 060 ``0'' to 071 ``9'' included,
** from 101 ``A'' to 132 ``Z'' included,
** from 141 ``a'' to 172 ``z'' included.
**
** RETURN VALUES:
**	The isalnum() function returns zero if the character tests false and returns
** non-zero if the character teststrue.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
